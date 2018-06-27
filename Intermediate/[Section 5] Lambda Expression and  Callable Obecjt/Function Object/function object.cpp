//#include <iostream>
//using namespace std;
//
//// 대부분 () 연산자만 쓰니 class보다 struct로 해서 public도 쓰지 않는다.
////class Plus
//template<typename T>
//struct Plus
//{
//	//public :
//	T operator()(T a, T b) const
//	{
//		return a + b;
//	}
//};
//
//void foo(const Plus<int>& p)		// Plus도 객체니 참조로 보내는게 좋다.
//{
//	int n = p(1, 2);				// 상수 객체는 상수 함수만 부를수 있다.
//}
//int main()
//{
//	Plus<int> p;
//
//	int n = p(1, 2);	// 객체를 함수처럼 쓰면 functor or function object 라 부른다.
//	cout << n << endl;
//
//	// 이걸알아야 객체가 함수처럼 호출되는걸 알수 있다.
//	// a + b;		// a.operator+(b)
//	// a - b;		// a.operator-(b)
//	// a();			// a.operator()()
//	// a(1,2);		// a.operator()(1,2)
//}