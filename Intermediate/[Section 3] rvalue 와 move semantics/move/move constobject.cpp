//#include <iostream>
//#include "Test.h"
//
//using namespace std;
//
//// lvalue를 전달 T : lvalue 참조 => const Test&
//template<typename T>
//typename remove_reference<T>::type && xmove(T&& obj)
//{
//	// Test( const Test& ) const, non-const lvalue, rvalue 만 받을수 있다.
//	// Test( Test&& ) non-const lvalue, rvalue 만 받을수 있다.
//	// 따라서 상수객체가 넘어오게 되면 move는 일어 날수 없고 copy가 일어난다.
//	return static_cast<typename remove_reference<T>::type &&>(obj);
//}
//
//int main()
//{
//	const Test t1;
//	Test t2 = move(t1);	// move? copy? : copy가 일어난다 const 객체는 move를 할수 없다.
//
//	//Test t3 = static_cast<Test&&>(t1);	//error
//}