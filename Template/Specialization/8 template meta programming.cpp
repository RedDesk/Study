//#include <iostream>
//using namespace std;
//
//// template meta programming. ������ Ÿ�ӿ� ���Ǿ����� �ڵ�.
//template<int N> struct factorial
//{
//	//enum { value = N * factorial<N - 1>::value };
//	static constexpr int value = N * factorial<N - 1>::value;
//};
//
//template<> struct factorial<1>
//{
//	//enum { value = 1 };
//	static constexpr int value = 1;
//};
//
//int main()
//{
//	// ������Ÿ�Ӷ� �� ��������.
//	int n = factorial<5>::value;		// 5 * 4 * 3 * 2 * 1 => 120
//	cout << n << endl;
//}