//// Ư��ȭ Ȱ��
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
//// �κ� Ư��ȭ
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
//// Ȱ��!!
//// ��Ʈ ������ ������ ���� Ŭ����
//template<size_t N>
//struct Bit
//{
//	//int bitmap;			// 32bit ���� 
//
//	//using type = typename IfThenElse<(N <= 8), char, int>::type;
//	using type = typename conditional< (N <= 8), char, int>::type; // c++ ǥ��
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