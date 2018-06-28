//#include <iostream>
//#include <list>
//using namespace std;
//
//template<typename T> class Vector
//{
//	T* buff;
//	int size;
//public:
//	Vector(int sz, T value) {}
//	template <typename C>Vector(C c)
//	{
//		cout << "template <typename C>Vector(C c) " << endl;
//		cout << typeid(c).name() << endl;
//	}
//
//	//template <typename C> Vector(C a, C b) {}
//
//	template <typename ITer> Vector(ITer a, ITer b)
//	{
//		cout << "template <typename ITer, typename ITer> Vector(ITer a, ITer b)" << endl;
//		cout << &a << endl;
//		cout << &b << endl;
//	}
//};
//
//// C에 대한 추론 가이드를 명시한다.
//template<typename C>
//Vector(C c)->Vector<typename C::value_type>;
//
//template <typename ITer>
//Vector(ITer a, ITer b)->Vector<decltype(a)>;
//
//int main()
//{
//	Vector v(10, 3);
//
//	list<int> s = { 1,2,3 };
//	Vector v2(s);
//
//	Vector v3(s.begin(), s.end());
//
//	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	Vector v4(x, x + 10);
//}