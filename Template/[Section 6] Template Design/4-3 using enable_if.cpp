//#include <iostream>
//#include <type_traits>
//using namespace std;
//
///*
//// 1. �Լ� ���� Ÿ��.
//template<typename T>
//typename enable_if<is_integral<T>::value>::type
//foo(T a)
//{
//	cout << "T" << endl;
//}
//*/
//// 2. �Լ� ���� Ÿ�� -> �����ڿ��� �ַ� ���.
//template<typename T>
//void foo(T a, typename enable_if<is_integral<T>::value>::type* = nullptr) // void�� �Լ����ڷ� �ȵǴ� *�� �ְ� ����Ʈ�� nullptr�� �ִ´�.
//{
//	cout << "T" << endl;
//}
//
//
//// 3. ���ø� ���� Ÿ�� -> �Լ� ��ü�� ����� �ܼ��� ���̴� ������ �ִ�.
//// ���ϰ�� template<typename T, void* = nullptr>
////template<typename T, typename enable_if<is_integral<T>::value>::type* = nullptr>
////void foo(T a)
////{
////	cout << "T" << endl;
////}
//
//void foo(...) { cout << "..." << endl; }
//
//int main()
//{
//	foo(3);
//}