//#include <iostream>
//using namespace std;
//
//
//template<typename T, typename U> struct Test
//{
//	static void foo() { cout << "T, U" << endl; }
//};
//
//template<typename T, typename U> struct Test<T*, U>
//{
//	static void foo() { cout << "T*, U" << endl; }
//};
//
//template<typename T, typename U> struct Test<T*, U*>
//{
//	static void foo() { cout << "T*, U*" << endl; }
//};
//
//// ÇÙ½É
//template<typename T> struct Test<T, T>
//{
//	static void foo() { cout << "T, T" << endl; }
//};
//
//template<typename T> struct Test<int, T>
//{
//	static void foo() { cout << "int, T" << endl; }
//};
//
//template<> struct Test<int, int>
//{
//	static void foo() { cout << "int, int" << endl; }
//};
//
//template<> struct Test<int, short>
//{
//	static void foo() { cout << "int, short" << endl; }
//};
//
//template<typename T, typename U, typename V> 
//struct Test<T, Test<U,V>>
//{
//	static void foo() { cout << "T, Test<U,V>" << endl; }
//};
//
//
//int main()
//{
//	Test<int, double>::foo();					// T, U
//	Test<int*, double>::foo();					// T*, U
//
//	Test<int*, double*>::foo();					// T*, U*
//	Test<int, int>::foo();						// T, T	   => int, int
//	Test<int, char>::foo();						// int, U
//	Test<int, short>::foo();					// int, short
//	Test<double, Test<char, short>>::foo();		// T, U
//}