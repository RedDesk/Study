//// Curiously Recurring Template Pattern
//// 기반 클래스에서 파생 클래스의 이름을 사용할 수 있게 하는 기법.
//
//#include <iostream>
//using namespace std;
//
//template<typename T> class Base
//{
//public:
//	Base()
//	{
//		cout << typeid(T).name() << endl;
//	}
//};
//
//
//class Derived : public Base<Derived>
//{
//};
//
//
//int main()
//{
//	Derived d;
//}