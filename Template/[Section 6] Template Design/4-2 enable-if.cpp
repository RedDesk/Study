//#include <iostream>
//#include <type_traits>
//using namespace std;
//// 조건을 만족할 때 만 함수를 생성하는 방법
//// 1. static_assert : 조건을 만족하지 않으면 컴파일 에러
//// 2. enable_if : 조건을 만족하지 않으면 함수를 생성하지 않음. 
//// - 동일 이름의 다른 함수가 있다면 사용 (없다면 컴파일 에러 발생)

//
//
///*
//// 정수일때만 함수 코드를 생성하고 싶다.
//template<typename T> void foo(T a)
//{
//	static_assert(is_integral<T>::value, "error");
//}
//*/
//
//// 치환 실패를 유도한다.
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