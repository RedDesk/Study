//// Andrei Alexandrescue : ���ø��� �������� ���? loki ���̺귯�� , Modern C++ Design (���̵� ���� ����)
//// loki ���̺귯���� Typelist�� ���캸��.
//
////1. ���� �����ϴ°� �ƴϴ�.
////2. Ÿ���� N�� �����Ѵ�.
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
//	//!!!! Ÿ���ϳ��� �������� Ÿ���� ������ �ִ� Ÿ�Ը���Ʈ�� ������ �ִ�.
//	xtuple< TYPELIST_3(int, double, char) > t2;
//}