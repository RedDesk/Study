//// Andrei Alexandrescue : 템플릿의 전설적인 사람? loki 라이브러리 , Modern C++ Design (난이도 높은 서적)
//// loki 라이브러리의 Typelist를 살펴보자.
//
////1. 값을 보관하는게 아니다.
////2. 타입을 N개 보관한다.
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
//
//template<typename T> class xtuple {};
//
//int main()
//{
//	/*
//	Typelist<int, double> t1;
//	Typelist<int, Typelist<int, double>> t2;
//	Typelist<int, Typelist<int, Typelist<char, double>>> t3;
//	*/
//
//	/*
//	Typelist<int, NullType> t1;
//	Typelist<int, Typelist<double, NullType>> t2;
//	Typelist<int, Typelist<double, Typelist<char, NullType>>> t3;
//	*/
//
//	xtuple<int> t1;
//	//!!!! 타입하나에 여러개의 타입을 담을수 있는 타입리스트를 넣을수 있다.
//	xtuple< TYPELIST_3(int, double, char) > t2;
//}