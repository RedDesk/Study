//#include <iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	void foo(int a) { cout << "int" << endl; }
//	void foo(int, int) { cout << "int,int" << endl; }
//};
//
//class Derived : public Base
//{
//public :
//	// 부모의 함수를 상속한다.
//	using Base::foo;
//	// 자식이 부모의 foo를 가린다.
//	// 오버로딩이 아니다.
//	void foo(double d) { cout << "double" << endl; }
//};
//
//int main()
//{
//	Derived d;
//
//	d.foo(3.4);
//	d.foo(0);
//}