// type traits ���
// 1. type�� ���� query - is_pointer<>, is_array<>, extent<>
// 2. type�� ���� ���� Ÿ�� ���ϱ� - remove_pointer<>, add_pointer<>

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
//// ���� ������ �غ���.
//// primary ver
//template<typename T> struct xremove_pointer
//{
//	typedef T type;
//};
//
//// �κ� Ư��ȭ�� ���� TŸ���� �����Ѵ�.
//template<typename T> struct xremove_pointer<T*>
//{
//	typedef T type;
//};
//
//// const, volatile, const volatile ������ �ʿ信 ���� �����.
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