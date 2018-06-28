
#include <iostream>
#include <type_traits>
using namespace std;

/*
// bool, char, short, int, long, long long
// "��� ���� �迭�� ������ �ð� ���" ����� �ְ� ����.
template<typename T, T N> struct integral_constant
{
	static constexpr T value = N;
};

//integral_constant<int, 0> t0;
//integral_constant<int, 1> t1;
//integral_constant<short, 1> t2;

typedef integral_constant<bool, true> true_type;			// true/false �� ������ ��Ÿ���� ��. ���� ���� Ÿ��.
typedef integral_constant<bool, false> false_type;			// true_type/false_type �� ������ ��Ÿ���� Ÿ��. ���� �ٸ� Ÿ��.

template<typename T>
struct xis_pointer : false_type {};

template<typename T>
struct xis_pointer<T*> : true_type {};

int main()
{
}
*/
//
//// C++11�� �̿��ؼ� ����� ����.
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
//void printv(T v)				// is_pointer<T>����
//{													// T�� �����Ͱ� �ƴϸ� value = false, ���Ŭ������ false_type
//	printv_imp(v, is_pointer<T>());					// T�� ������ ��� value = true, ��� Ŭ������ true_type
//}
//
//int main()
//{
//	int n = 3;
//	printv(n);
//	printv(&n);
//}