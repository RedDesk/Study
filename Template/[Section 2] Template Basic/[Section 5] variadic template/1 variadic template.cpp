//// c++ 11 가변 인자 템플릿
//#include <iostream>
//using namespace std;
//
//void goo(int n, double d, const char* s)
//{
//	cout << "goo : " << n << " " << d << " " << s << endl;
//}
//
//template<typename ... Types>
//void foo(Types ... args)
//{
//	// args : Parameter Pack
//	cout << sizeof...(args) << endl;
//	cout << sizeof...(Types) << endl;
//
//	goo(args...);	// pack expansion 
//					//: goo( arg1, arg2, arg3) 
//					//: goo( 1, 3.4, "AAA") 
//}
//
//int main()
//{
//	foo(1, 3.4, "AAA");
//	// Types : int, double, const char*
//	// args : 1, 3.4, "AAA"
//}