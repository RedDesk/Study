
#include <iostream>
#include <type_traits>
using namespace std;

/*
// bool, char, short, int, long, long long
// "모든 정수 계열의 컴파일 시간 상수" 만들수 있게 하자.
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};

//integral_constant<int, 0> t0;
//integral_constant<int, 1> t1;
//integral_constant<short, 1> t2;

typedef integral_constant<bool, true> true_type;			// true/false 참 거짓을 나타내는 값. 서로 같은 타입.
typedef integral_constant<bool, false> false_type;			// true_type/false_type 참 거짓을 나타내는 타입. 서로 다른 타입.

template<typename T>
struct xis_pointer : false_type {};

template<typename T>
struct xis_pointer<T*> : true_type {};

int main()
{
}
*/
//
//// C++11을 이용해서 만들어 보자.
//template<typename T>
//void printv_imp(T v, true_type)
//{
//	cout << v << " : " << *v << endl;
//}
//
//template<typename T>
//void printv_imp(T v, false_type)
//{
//	cout << v << endl;
//}
//
//template<typename T>
//void printv(T v)				// is_pointer<T>에서
//{													// T가 포인터가 아니면 value = false, 기반클래스는 false_type
//	printv_imp(v, is_pointer<T>());					// T가 포인터 라면 value = true, 기반 클래스는 true_type
//}
//
//int main()
//{
//	int n = 3;
//	printv(n);
//	printv(&n);
//}