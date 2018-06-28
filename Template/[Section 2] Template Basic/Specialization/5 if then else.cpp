//// 특수화 활용
//
//#include <iostream>
//#include <type_traits>
////#include <typeinfo>
////
//using namespace std;
//
//template<bool b, typename T, typename F> struct IfThenElse
//{
//	typedef T type;
//};
//
//// 부분 특수화
//template<typename T, typename F>
//struct IfThenElse<false, T, F>
//{
//	typedef F type;
//};
////
////int main()
////{
////	IfThenElse<true, int, double>::type t0;		// int
////	IfThenElse<false, int, double>::type t1;	// double
////
////	cout << typeid(t0).name() << endl;
////	cout << typeid(t1).name() << endl;
////}
//
//// 활용!!
//// 비트 관리및 보관을 위한 클래스
//template<size_t N>
//struct Bit
//{
//	//int bitmap;			// 32bit 관리 
//
//	//using type = typename IfThenElse<(N <= 8), char, int>::type;
//	using type = typename conditional< (N <= 8), char, int>::type; // c++ 표준
//	type bitmap;
//};
//
//int main()
//{
//	Bit<32> b1;
//	Bit<8> b2;
//	Bit<16> b3;
//
//	cout << sizeof(b1) << endl;
//	cout << sizeof(b2) << endl;
//	cout << sizeof(b3) << endl;
//}