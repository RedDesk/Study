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
//// Typelist Ȱ��
//// Holder : ���� Ÿ���� data �ϳ� ����.
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
//// MakeCode�� 1��° ���ڰ� Typelist�϶�..
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
//	MakeCode<int, Holder> mc1;		// ��� Ŭ���� Holder<int> �̹Ƿ� 
//									// Holder<int>�� �޸� ����� ����..
//	MakeCode<double, Holder> mcs2;	// Holder<double> �� ����
//	MakeCode<NullType, Holder> mc3;	// Holder<NullType>
//
//	// MakeCode�� 1��° ���ڰ� Typelist �϶�..
//	//		Typelist<int, Typelist<double,NullType>>
//	MakeCode<TYPELIST_2(int, double), Holder> m;
//
//	//int x[10] = { 0 };
//
//	const char* const s = "hhh";
//	foo(s);
//	//goo(x);
//}