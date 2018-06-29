//#include <iostream>
//using namespace std;
//
//// template meta programming. 컴파일 타임에 계산되어지는 코드.
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
//	// 컴파일타임때 다 정해진다.
//	int n = factorial<5>::value;		// 5 * 4 * 3 * 2 * 1 => 120
//	cout << n << endl;
//}