//#include <iostream>
//#include <type_traits>
//using namespace std;
//// ������ ������ �� �� �Լ��� �����ϴ� ���
//// 1. static_assert : ������ �������� ������ ������ ����
//// 2. enable_if : ������ �������� ������ �Լ��� �������� ����. 
//// - ���� �̸��� �ٸ� �Լ��� �ִٸ� ��� (���ٸ� ������ ���� �߻�)

//
//
///*
//// �����϶��� �Լ� �ڵ带 �����ϰ� �ʹ�.
//template<typename T> void foo(T a)
//{
//	static_assert(is_integral<T>::value, "error");
//}
//*/
//
//// ġȯ ���и� �����Ѵ�.
//template<typename T>
//typename enable_if<is_integral<T>::value>::type
//foo(T a)
//{
//	//static_assert(is_integral<T>::value, "error");
//	cout << "T" << endl;
//}
//
//void foo(...)
//{
//	cout << "not integer" << endl;
//}
//
//int main()
//{
//	foo(3.4);
//}