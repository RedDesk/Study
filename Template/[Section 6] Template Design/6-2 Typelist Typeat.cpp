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
//// ��ũ�� ����
//#define TYPELIST_1(T1)			Typelist<T1, NullType>
//#define TYPELIST_2(T1,T2)		Typelist<T1, Typelist<T2,NullType>>
//#define TYPELIST_3(T1,T2,T3)	Typelist<T1, Typelist<T2,Typelist<T3,NullType>>>
//#define TYPELIST_4(T1,T2,T3,T4)	Typelist<T1, Typelist<T2,Typelist<T3,Typelist<T4,NullType>>>>
////---------------------------------------------------------------------------------------------
//
//// ����ϴ� ����� ���� primary template�� �����.
//// T : Typelist
//template<typename T, int N> struct TypeAt;
////{
//	//typedef ? T;
////};
//
//// 2. �κ� Ư��ȭ�� �̿��Ͽ� ���ϴ� Ÿ���� ���Ҽ� �ֵ��� �Ѵ�.
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
//// Typelist�� N��° ��� ���ϱ�.
//int main()
//{
//	test<TYPELIST_4(int, char, short, double) >();
//}