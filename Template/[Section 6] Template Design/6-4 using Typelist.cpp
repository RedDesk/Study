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
//// Typelist 활용
//// Holder : 임의 타입의 data 하나 보관.
//template<typename T> struct Holder
//{
//	T value;
//};
//
//// GenScatterHierachy => MakeCode
//
//template<typename T, template<typename> class Unit>
//class MakeCode : public Unit<T>
//{
//};
//
//template< template<typename> class Unit>
//class MakeCode<NullType, Unit>
//{
//};
//
//// MakeCode의 1번째 인자가 Typelist일때..
//template<typename Head, typename Tail, template<typename> class Unit>
//											//                          Holder<double>				empty
//											// Holder<int>				MakeCode<double, Unit>		MakeCode<NullType, Unit>
//											// MakeCode<int, Unit>		MakeCode< Typelist<double, NullType>, Unit>
//class MakeCode<Typelist<Head, Tail>, Unit> : public MakeCode<Head, Unit>, public MakeCode<Tail, Unit>
//{
//	// int value;		
//	// double value;	 
//};
//
//template<typename T> void foo(T a) { cout << typeid(T).name() << endl; }
//template<typename T> void goo(T& a) { cout << typeid(T).name() << endl; }
//
//int main()
//{
//	Holder<int> h1;
//
//	MakeCode<int, Holder> mc1;		// 기반 클래스 Holder<int> 이므로 
//									// Holder<int>와 메모리 모양이 동일..
//	MakeCode<double, Holder> mcs2;	// Holder<double> 과 동일
//	MakeCode<NullType, Holder> mc3;	// Holder<NullType>
//
//	// MakeCode의 1번째 인자가 Typelist 일때..
//	//		Typelist<int, Typelist<double,NullType>>
//	MakeCode<TYPELIST_2(int, double), Holder> m;
//
//	//int x[10] = { 0 };
//
//	const char* const s = "hhh";
//	foo(s);
//	//goo(x);
//}