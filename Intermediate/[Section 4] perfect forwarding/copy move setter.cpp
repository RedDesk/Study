//#include <iostream>
//using namespace std;
//
//class Data
//{
//public:
//	Data() {	}
//	~Data() {}
//
//	Data(const Data& t)
//	{
//		cout << "copy ctor" << endl;
//	}
//
//	Data(Data&& t) noexcept
//	{
//		cout << "move ctor" << endl;
//	}
//
//	Data& operator=(const Data& t)
//	{
//		cout << "copy=" << endl;
//		return *this;
//	}
//
//	Data& operator=(Data&& t) noexcept
//	{
//		cout << "move=" << endl;
//		return *this;
//	}
//};
//
//class Test
//{
//	Data data;
//public:
//	// 이코드는 무조건 copy=를 사용 
//	//void setData(const Data& d) { data = d; }
//
//	// 이코드는 어떨까? move=?? no!! copy= 
//	// 상수 객체는 move 될수 없다!!
//	// void setData(const Data& d) { data = move(d); }
//
//	// 방법1. move setter와 copy setter를 별도의 함수로 제공
//	// 장점 : overhead가 없다. 
//	// 단점 : setter 2개씩 꼭 제공해야 한다.
//	//void setData(const Data& d) { data = d; }
//	//void setData(Data&& d) { data = move(d); }
//
//	// 방법2 call by value를 이용한다.
//	// 장점 : setter를 한개만 제공한다.
//	// 단점 : move= 의 overhead가 발생한다.
//	//void setData(Data d) { data = move(d); }
//
//	// 방법3 forwarding reference를 이용한다.
//	// 장점 : 오버헤드 없고 하나만 제공하면 된다.
//	// 단점 : side effect를 고려해야 한다.
//	//		  T가 data로 암시적 형변환이나 다른 타입일 경우 막는 기법이 필요하다.
//	template<typename T>
//	void setData(T&& a)
//	{
//		data = std::forward<T>(a);
//	}
//};
//
//int main()
//{
//	Test test;
//	Data d;
//
//	//test.setData(d);			// 실행후에도 d를 사용할것이다.
//	//test.setData(move(d));		// 실행후에는 d를 사용불가.
//
//	test.setData<Data&>(d);
//	test.setData<Data&&>(move(d));//static_cast<Data&&>(d));
//}