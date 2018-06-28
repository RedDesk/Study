//#include <iostream>
//
//using namespace std;
//
//// 핵심은 가변인자와 아닌 버전 둘다 템플릿. 
//template<typename T> char check(typename T::value_type* a);	// 치환 성공
//template<typename T> short check(...);							// 치환 실패
//
//struct NoValueType {};
//struct HasValueType { typedef int value_type; };
//
//// 이 함수에서 check함수를 불러서 
//template<typename T> struct has_value_type
//{
//	static constexpr bool value = sizeof(check<T>(0)) == 1;
//};
//
//int main()
//{
//	//bool b1 = has_value_type<NoValueType>::value;
//	//bool b1 = has_value_type<HasValueType>::value;
//
//
//	//HasValueType t1;
//	//cout << sizeof(check<HasValueType>(0)) << endl;
//	//NoValueType t2;
//	//cout << sizeof(check<NoValueType>(0)) << endl;
//
//	cout << has_value_type<HasValueType>::value << endl;
//	cout << has_value_type<NoValueType>::value << endl;
//}