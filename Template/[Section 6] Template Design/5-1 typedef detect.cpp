//#include <iostream>
//
//using namespace std;
//
//// �ٽ��� �������ڿ� �ƴ� ���� �Ѵ� ���ø�. 
//template<typename T> char check(typename T::value_type* a);	// ġȯ ����
//template<typename T> short check(...);							// ġȯ ����
//
//struct NoValueType {};
//struct HasValueType { typedef int value_type; };
//
//// �� �Լ����� check�Լ��� �ҷ��� 
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