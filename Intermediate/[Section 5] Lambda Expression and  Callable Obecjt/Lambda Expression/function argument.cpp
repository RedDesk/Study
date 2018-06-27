//#include <iostream>
//#include <functional>
//
//using namespace std;
//
//
//
////template<typename T> void foo( T f )
////template<typename T> void foo(T& f)	// 임시객체는 lvalue 로 받을수 없다.
//template<typename T> void foo(const T& f)	// 하려면 이렇게 하던 forwarding reference로 받아라.
//{
//	f(1, 2);
//}
//
//int main()
//{
//	// Lambda Expression을 담는 방법 3가지.
//
//	// 1. 함수 객체
//	auto f1 = [](int a, int b) { return a + b; };
//
//	// 2. 함수 포인터. 변수라 다른 람다를 담을수 있다.
//	int(*f2)(int, int) = [](int a, int b) { return a + b; };
//	// f2 = [](int a, int b) { return a - b; };
//
//	// 3. std::function.
//	function<int(int, int)> f3 = [](int a, int b) { return a + b; };
//
//	f1(1, 2);	// inlie 가능.
//	f2(1, 2);	// inlie 어렵다.
//	f3(1, 2);	// inlie 어렵다.
//
//	
//	foo([](int a, int b) { return a + b; });
//	foo([](int a, int b) { return a - b; });
//}