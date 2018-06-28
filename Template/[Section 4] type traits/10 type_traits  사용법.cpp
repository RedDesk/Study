//#include <iostream>
//#include <type_traits>
//
//using namespace std;
//
//// c++ 14
//// using�� �̿��ϱ�
////template<typename T>
////using remove_pointer_t = typename remove_pointer<T>::type;
//
//// ������ Ÿ���� ��� traits
//template<typename T> void foo(T a)
//{
//	// �����͸� ������ Ÿ���� ���ϰ� �ʹ�.
//	// typename remove_pointer<T>::type n;
//
//	remove_pointer_t<T> n;
//
//	cout << typeid(n).name() << endl;
//}
//
//// c++ 17
//// variable template�� �̿�.
////template<typename T>
////inline constexpr bool is_pointer_v = is_pointer<T>::value;
//
//// Ÿ���� ������ �����ϴ� traits
//template<typename T> void goo(T a)
//{
//	//bool b = is_pointer<T>::value;
//	bool b = is_pointer_v<T>;
//
//}
//
//
//
//// �迭 ���� �����ϱ�.
//// ������ ������� T :  array => pointer : decay�߻�
//// T&�� �޾ƾ� �Ѵ�.
//template<typename T> void hoo(T& a)
//{
//	if (is_array<T>::value)
//	{
//		cout << "array" << endl;
//
//		cout << extent_v<T, 0> << endl;
//		cout << extent_v<T, 1> << endl;
//	}
//}
//
//
//template<typename T, typename U> void joo(T a, U b)
//{
//	// ���� Ÿ������ ����
//	/*bool ret = is_same< typename remove_cv<T>::type,
//						typename remove_cv<U>::type>::value;*/
//	
//	// array => pointer : decay
//	/*bool ret = is_same< typename decay<T>::type,
//						typename decay<U>::type>::value;*/
//
//	// T�� U�� Base Class ���� ����.
//	/*bool ret = is_base_of<T, U>::value;*/
//
//	cout << ret << endl;
//}
//
//// ���� traits�� �����Ѵ� cppreference.com ���� Ȯ���غ���.
//
//class A{};
//class B : public A{};
//
//int main()
//{
//	int n = 0;
//
//	/*foo(&n);
//
//	goo(&n);
//
//	int x[3][2] = { 1,2,3,4,5,6 };
//	hoo(x);*/
//
//	//joo<int, const int>(0, 0);
//	//joo<int[3], int*>(0, 0);
//	
//}