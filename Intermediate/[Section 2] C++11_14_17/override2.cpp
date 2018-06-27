//#include <iostream>
//
//using namespace std;
//
//template<typename T> 
//class Base
//{
//public :
//	virtual void foo(const T a)
//	{
//		cout << "Base::foo" << endl;
//	}
//};
//
//class Derived : public Base<int*>
//{
//public : 
//	virtual void foo(? a)
//	{
//		cout << "Derived::foo" << endl;
//	}
//};
//
//int main()
//{
//	Base<int*>* p = new Derived;
//	p->foo(0);
//}