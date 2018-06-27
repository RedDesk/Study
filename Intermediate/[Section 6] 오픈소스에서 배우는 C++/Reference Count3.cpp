//#include <iostream>
//using namespace std;
//
//// 템플릿 인자 T를 사용하지 않은 멤버는 기반 클래스로 뽑아낸다.	- Thin Template 기법.
//// 코드 메모리를 줄임.
//class RefCountBase
//{
//protected:
//	int mutable mCount;							// c++11 atomic으로 하면 멀티스레드에 안전해진다.
//	~RefCountBase() {}
//	RefCountBase() : mCount(0) {}
//
//public:
//	// 상수 함수는 멤버 변수를 바꿀수 없다.
//	// 그래서mCount를 mutable로 한다.
//	void addRef() const { ++mCount; }
//};
//
//
//template<typename T> class RefCount : public RefCountBase
//{
//protected:
//	~RefCount() {}
//	RefCount() {}
//
//public:
//	//void release() 							// void release( RefCount* const this )
//	void release() const						// void release( const RefCount* const this )
//	{
//		if (--mCount == 0)
//			//delete static_cast<T*>(this);			// 여기서 error가 발생한다.
//			//delete static_cast<T*>(const_cast<RefCount*>(this)); // ok
//			delete static_cast<const T*>(this);	// ok
//	}
//};
//
//
//class Truck : public RefCount<Truck> { public:	~Truck() { cout << "~Truck" << endl; } };
//class Bus : public RefCount<Bus> { public:	~Bus() { cout << "~Bus" << endl; } };
//
//int main()
//{
//	// 자동차를 만들건데 속성을 바꾸진 않겠다.
//	// 하지만 참조함수는 호출해야 한다.
//	// 상수 객체는 상수 함수만 부를수 있다.	
//	const Truck* p = new Truck;
//	p->addRef();		// 이 문제점은 스마트 포인터를 쓰면 해결된다.
//	p->release(); 
//}