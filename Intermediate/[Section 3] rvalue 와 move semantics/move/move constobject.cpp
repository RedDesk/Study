//#include <iostream>
//#include "Test.h"
//
//using namespace std;
//
//// lvalue�� ���� T : lvalue ���� => const Test&
//template<typename T>
//typename remove_reference<T>::type && xmove(T&& obj)
//{
//	// Test( const Test& ) const, non-const lvalue, rvalue �� ������ �ִ�.
//	// Test( Test&& ) non-const lvalue, rvalue �� ������ �ִ�.
//	// ���� �����ü�� �Ѿ���� �Ǹ� move�� �Ͼ� ���� ���� copy�� �Ͼ��.
//	return static_cast<typename remove_reference<T>::type &&>(obj);
//}
//
//int main()
//{
//	const Test t1;
//	Test t2 = move(t1);	// move? copy? : copy�� �Ͼ�� const ��ü�� move�� �Ҽ� ����.
//
//	//Test t3 = static_cast<Test&&>(t1);	//error
//}