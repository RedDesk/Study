//#include <iostream>
//using namespace std;
//
//template<typename T, typename U> struct Typelist
//{
//	typedef T Head;
//	typedef U Tail;
//};
//
//struct NullType {};
//
//// 매크로 도입
//#define TYPELIST_1(T1)			Typelist<T1, NullType>
//#define TYPELIST_2(T1,T2)		Typelist<T1, Typelist<T2,NullType>>
//#define TYPELIST_3(T1,T2,T3)	Typelist<T1, Typelist<T2,Typelist<T3,NullType>>>
//#define TYPELIST_4(T1,T2,T3,T4)	Typelist<T1, Typelist<T2,Typelist<T3,Typelist<T4,NullType>>>>
////---------------------------------------------------------------------------------------------
//
//// 사용하는 모습을 보고 primary template을 만든다.
//// T : Typelist
//template<typename T, int N> struct TypeAt;
////{
//	//typedef ? T;
////};
//
//// 2. 부분 특수화를 이용하여 원하는 타입을 구할수 있도록 한다.
//
////template<typename T, typename U, int N> struct TypeAt<Typelist<T, U>, N>
////{
////	 typedef ? T;
////};
//
//// N == 0 
//template<typename T, typename U> struct TypeAt<Typelist<T, U>, 0>
//{
//	typedef T type;
//};
//
//// N != 0
//template<typename T, typename U, int N> struct TypeAt<Typelist<T, U>, N>
//{
//	typedef typename TypeAt<U, N - 1>::type type;
//};
//
//template<typename T> void test()
//{
//	typename TypeAt<T, 3>::type n;	// int
//
//	cout << typeid(n).name() << endl;
//}
//
//// Typelist의 N번째 요소 구하기.
//int main()
//{
//	test<TYPELIST_4(int, char, short, double) >();
//}