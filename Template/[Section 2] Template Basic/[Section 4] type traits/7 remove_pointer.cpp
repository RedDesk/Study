// type traits 기능
// 1. type에 대한 query - is_pointer<>, is_array<>, extent<>
// 2. type에 대한 변형 타입 구하기 - remove_pointer<>, add_pointer<>

#include <iostream>
using namespace std;
/*
#include <type_traits>

template<typename T> void foo(T a)
{
	bool b = is_pointer<T>::value;

	typename remove_pointer<T>::type t;
	cout << typeid(t).name() << endl;
}

int main()
{
	int n = 10;

	foo(n);
	foo(&n);
}
*/
//
//// 직접 구현을 해보자.
//// primary ver
//template<typename T> struct xremove_pointer
//{
//	typedef T type;
//};
//
//// 부분 특수화를 통해 T타입을 분할한다.
//template<typename T> struct xremove_pointer<T*>
//{
//	typedef T type;
//};
//
//// const, volatile, const volatile 버전도 필요에 따라 만든다.
//
//template<typename T> void foo(T a)
//{
//	typename xremove_pointer<T>::type t;
//	cout << typeid(t).name() << endl;
//}
//
//int main()
//{
//	int n = 10;
//	foo(&n);
//}