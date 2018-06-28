//#include <iostream>
//using namespace std;
//
//// template instantiation을 위해 어떤 템플릿을 사용할 것인가?
//// specialization > partial specialization > primary template
//
//
//// primary template
//template<typename T, typename U> struct order
//{
//	static void foo() { cout << "T,U" << endl; }
//};
//
//// partial specialization
//template<typename T> struct order<T, T>
//{
//	static void foo() { cout << "T, T" << endl; }
//};
//
//// partial specialization
//template<typename T> struct order<T*, T*>
//{
//	static void foo() { cout << "T*, T*" << endl; }
//};
//
//// specialization
//template<> struct order<int*, int*>
//{
//	static void foo() { cout << "int*, int*" << endl; }
//};
//
//int main()
//{
//	order<int*, int*>::foo();
//}