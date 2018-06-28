//#include <iostream>
//#include <type_traits>
//using namespace std;
//
///*
//// 1. 함수 리턴 타입.
//template<typename T>
//typename enable_if<is_integral<T>::value>::type
//foo(T a)
//{
//	cout << "T" << endl;
//}
//*/
//// 2. 함수 인자 타입 -> 생성자에서 주로 사용.
//template<typename T>
//void foo(T a, typename enable_if<is_integral<T>::value>::type* = nullptr) // void는 함수인자로 안되니 *를 넣고 디폴트로 nullptr을 넣는다.
//{
//	cout << "T" << endl;
//}
//
//
//// 3. 템플릿 인자 타입 -> 함수 자체의 모양이 단순해 보이는 장점이 있다.
//// 참일경우 template<typename T, void* = nullptr>
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