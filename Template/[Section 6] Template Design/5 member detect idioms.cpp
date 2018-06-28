//#include <iostream>
//#include <vector>
//using namespace std;
//
////// sizeof 는 함수의 선언만 보고 판단한다. 런타임 메카니즘이 아니다.
////// 그래서 선언만 있어도 작동한다.
////char foo(int a) { return 0; }
////short foo(double d) { return 0; }
////
////
////int main()
////{
////	int n = 10;
////
////	cout << sizeof(n) << endl;
////	//cout << sizeof(foo) << endl;	// 함수는 안됨.
////	cout << sizeof(foo(3)) << endl;	// 리턴타입의 크기. 1bytes
////	cout << sizeof(foo(3.3)) << endl;	// 리턴타입의 크기. 2bytes
////}
//
//
//template<typename T> void foo(T a) {}
//template<typename T> void goo(typename T::value_type a) {}
//
//int main()
//{
//	vector<int> v(10, 3);
//
//	foo(v);
//	//goo(0);	// error
//	goo<vector<int>>(0);	// ok
//}