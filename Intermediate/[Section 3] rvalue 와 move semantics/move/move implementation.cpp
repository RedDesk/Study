//#include <iostream>
//#include "Test.h"
//#include <type_traits>
//
//using namespace std;
//
//// T& : lvalue�� ������ �ִ�.
//// T&& : l, r value ��� ������ �ִ�.
//// ���ڷ� lvalue : T => Test&	cast<T&&> : Test& && => Test&
////        rvalue : T => Test	cast<T&&> : Test && => Test&&
//// ĳ���� �ҽ� reference collapse ��Ģ�� ����ȴ�.
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
//							// ��� move������ ȣ���� �ƴ϶�. static_cast<Test&&>(t1) rvalue�� ĳ������ ���ִ� �Ŵ�. 
//							// rvalue�� move�����ڸ� ȣ���ϱ� ������ ��������� move�����ڰ� ȣ��Ǵ°Ŵ�.
//
//	Test t4 = xmove(Test());
//}