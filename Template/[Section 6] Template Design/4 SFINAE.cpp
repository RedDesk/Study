//#include <iostream>
//using namespace std;
//
//// 함수 찾는 순서 꼭 알아둘 것.
//// 1. exactly matching
//// 2. template
//// 3. variable argument
//
//// SFINAE 개념
//// 1. Substitution Failure Is Not An Error  치환 실패는 에러가 아니다!!
//// 2. 함수 템플릿을 사용시 T의 타입이 결정되고 함수를 생성(instantiation)하려고 할때
//// 리턴 타입이나 함수 인자 등에서 치환에 실패하면 컴파일 에러가 아니라, 함수 후보군에서 제외 한다.
//// 3. 동일한 이름의 다른 함수가 있다면 다른 함수를 사용하게 된다.
//
//template<typename T>
//typename T::type foo(T t)	// int::type foo(int i) 에러지만 에러를 내지 않는다.
//{
//	cout << "T" << endl; return 0;
//}
//
//void foo(...)
//{
//	cout << "..." << endl;
//}
//
//int main()
//{
//	foo(3);
//}