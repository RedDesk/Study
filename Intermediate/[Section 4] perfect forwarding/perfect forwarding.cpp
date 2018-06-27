//#include <iostream>
//
//using namespace std;
//
//int x = 10;
//int& foo(int a) { cout << "foo" << endl; return x; }
//void goo(int& a) { cout << "goo" << endl; a = 30; }
//void hoo(int&&) { cout << "hoo" << endl; }
//
//
//void fo(int a, int&b, double d) { b = 30; }
//void go() {}
//
//// 완벽한 전달 : 래퍼함수가 인자를 받아서 원본 함수에게 완벽하게 전달하는 개념.
//// 핵심 1. 함수 인자를 받을때 reference를 사용해야 한다.
//// 핵심 2. lvalue reference, rvalue reference 2가지 버전을 제공해야 한다.
//// 핵심 3. rvalue reference 버전은 인자를 원본 함수에 전달할 때 rvalue로 캐스팅해서 넘거야 한다.
//
////template <typename F >
////void chronometry(F f, int& arg)
////{
////	f(arg);
////}
////
////template <typename F >
////void chronometry(F f, int&& arg)
////{
////	f(static_cast<int&&>(arg));
////}
//
//
//// forwarding reference로 만들면 두가지 버전을 모두 대응할수 있다.
//// int& : lvalue만
//// int&& : rvalue만
//// T& : 모든 타입 lvalue
//// T&& : 모든타입 lvalue, rvalue 모두 받는다.
//
///*
//f는 뒤쪽에 있어서 앞쪽 선언부에서 쓸수 없다.
//template <typename F, typename T>
//decltype(f(std::forward<T>(arg))) chronometry(F f, T&& arg)
//{
//	// static_cast는 컴파일 타임이기 때문에
//	// lvalue 버전 함수에서 최적화로 인해 사라진다.
//	//f(static_cast<T&&>(arg));
//	return f(std::forward<T>(arg));
//}
//*/
//
///*
//// 후위형 리턴을 이용한다. C++11
//template <typename F, typename T>
//auto chronometry(F f, T&& arg) -> decltype(f(std::forward<T>(arg)))
//{
//	return f(std::forward<T>(arg));
//}
////*/
//
///*
//// 컴파일은 된다. C++ 14
//// 하지만 원본 함수가 참조를 리턴하면 버그가 발생한다.
//// auto는 참조속성을 제거한다.
//template <typename F, typename T>
//auto chronometry(F f, T&& arg)
//{
//	return f(std::forward<T>(arg));
//}
//*/
//
///*
//// C++ 14
//template <typename F, typename T>
//decltype(auto) chronometry(F f, T&& arg)
//{
//	return f(std::forward<T>(arg));
//}
////*/
//
////*
//// 가변 인자가 가능
//template<typename F, typename ... Types>
//decltype(auto) chronometry(F f, Types&& ... args)
//{
//	return f(std::forward<Types>(args)...);
//}
//
////*/
//
//int main()
//{
//	chronometry(&fo, 1, x, 3.4);
//	chronometry(&go);
//}