//// 템플릿을 만들때 타입을 조사하는 방법.
//// 1. <type_traits> 헤더 포함.
//// 2. ::value 값을 조사하는 방법
//// if문 사용시에는 *v 표현을 사용할수 없다.
//// c++ 17에서는 if constexpr를 사용하면 된다.
//// 3. true_type / false_type을 사용한다.
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
//	// T가 포인터 인지 알고 싶다.
//	if (is_pointer<T>::value)
//	// 2번째 방법 
//	// if constexpr (is_pointer<T>::value)
//	{
//		//*v = 10; // 이게 안될수 있다.
//	}
//	else
//	{
//
//	}
//
//	// 3번째 방법
//	foo_imp(v, is_pointer<T>());
//}
//
//int main()
//{
//	int n = 0;
//	foo(n);
//	foo(&n);
//}