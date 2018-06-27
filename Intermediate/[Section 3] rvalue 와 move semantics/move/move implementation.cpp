//#include <iostream>
//#include "Test.h"
//#include <type_traits>
//
//using namespace std;
//
//// T& : lvalue만 받을수 있다.
//// T&& : l, r value 모두 받을수 있다.
//// 인자로 lvalue : T => Test&	cast<T&&> : Test& && => Test&
////        rvalue : T => Test	cast<T&&> : Test && => Test&&
//// 캐스팅 할시 reference collapse 규칙이 적용된다.
//template<typename T>
//typename remove_reference<T>::type && xmove(T&& obj)
//{
//	return static_cast<typename remove_reference<T>::type &&>(obj);
//}
//
//int main()
//{
//	Test t1;
//	Test t2 = t1;			// copy
//	Test t3 = xmove(t1);	// move
//							// 사실 move생성자 호출이 아니라. static_cast<Test&&>(t1) rvalue로 캐스팅을 해주는 거다. 
//							// rvalue는 move생성자를 호출하기 때문에 결론적으로 move생성자가 호출되는거다.
//
//	Test t4 = xmove(Test());
//}