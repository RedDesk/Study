//#include <iostream>
//using namespace std;
//
//template<typename T>
//struct xis_array
//{
//	static constexpr bool value = false;
//	static constexpr int size = -1;
//};
//
//template<typename T, size_t N>
//struct xis_array<T[N]>	// 임의의 타입T에 대한 N개의 배열 모양.
//{
//	static constexpr bool value = true;
//	static constexpr int size = N;
//};
//
//// unknown size array
////template<typename T>
////struct xis_array<T[]>	// 임의의 타입T에 대한 N개의 배열 모양.
////{
////	static constexpr bool value = true;
////};
//
//// 함수 템플릿을 만들때 T의 타입을 값으로 만들경우 배열을 전달하면 
//// T 타입은 배열이 아닌 아닌 포인터로 결정된다.
//template<typename T> void foo(T& a)
//{
//	//if (xis_array<int[]>::value) // unkown size array
//	if (xis_array<T>::value)
//		cout << "is array, array size : " << xis_array<T>::size << endl;
//	else
//		cout << "not array" << endl;
//}
//
//int main()
//{
//	int x[3] = { 1,2,3 };
//	foo(x);
//
//	int b = 0;
//	foo(b);
//}