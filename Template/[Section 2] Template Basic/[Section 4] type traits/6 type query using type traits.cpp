//// ���ø��� ���鶧 Ÿ���� �����ϴ� ���.
//// 1. <type_traits> ��� ����.
//// 2. ::value ���� �����ϴ� ���
//// if�� ���ÿ��� *v ǥ���� ����Ҽ� ����.
//// c++ 17������ if constexpr�� ����ϸ� �ȴ�.
//// 3. true_type / false_type�� ����Ѵ�.
//
//#include <iostream>
//using namespace std;
//
//template<typename T>
//void foo_imp(T v, true_type)
//{
//	*v = 10;
//}
//
//template<typename T>
//void foo_imp(T v, false_type)
//{
//
//}
//
//template<typename T>
//void foo(T v)
//{
//	// T�� ������ ���� �˰� �ʹ�.
//	if (is_pointer<T>::value)
//	// 2��° ��� 
//	// if constexpr (is_pointer<T>::value)
//	{
//		//*v = 10; // �̰� �ȵɼ� �ִ�.
//	}
//	else
//	{
//
//	}
//
//	// 3��° ���
//	foo_imp(v, is_pointer<T>());
//}
//
//int main()
//{
//	int n = 0;
//	foo(n);
//	foo(&n);
//}