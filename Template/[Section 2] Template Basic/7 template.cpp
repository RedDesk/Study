//class Test
//{
//public : 
//	template<typename T> static void f() {}
//	template<typename T> class Complex {};
//};
//
//template<typename T> 
//typename T::template Complex<int> foo(T a)
//{
//	Test::f<int>();			// ok
//	//T::f<int>();			// error microsoft�� ���� �ȳ�.... �Ʒ�ó�� ǥ���Ұ�
//	T::template f<int>();	// ok
//
//	Test::Complex<int> c1; // ok
//	//T::Complex<int> c2;		// error microsoft�� ���� �ȳ�.... �Ʒ�ó�� ǥ���Ұ�
//	typename T::Complex<int> c3;	// error
//	//typename T::template Complex<int> c4;
//
//	return c3;
//}
//
//int main()
//{
//	Test t;
//	foo(t);
//}