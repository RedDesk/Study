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
//	// �θ��� �Լ��� ����Ѵ�.
//	using Base::foo;
//	// �ڽ��� �θ��� foo�� ������.
//	// �����ε��� �ƴϴ�.
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