//#include <iostream>
//#include <tuple>
//using namespace std;
//
//// Types ÀÇ expansion
//
//template<typename ... Types> void foo(Types ... args)
//{
//	int x[] = { args... };
//
//	// Types : int, double
//	pair<Types...> p1;				// pair<int, double>
//
//	tuple<Types...> t1;				// tuple<int, double>
//
//	tuple<pair<Types...>> t2;		// tuple<pair<int,double>> 
//	//tuple<pair<Types>...> t3;		// tuple<pair<int>, pair<double>>  error 
//	tuple<pair<int,Types>...> t4;	// tuple<pair<int,int>, pair<int,double>> ok
//
//	pair<tuple<Types...>> p2;		// pair<tuple<int, double>> error
//	pair<tuple<Types>...> p3;		// pair<tuple<int>, tuple<double>> ok
//
//
//}
//
//int main()
//{
//	foo(1, 3.4);		// args : 1, 3.4
//						// types: int, double
//}