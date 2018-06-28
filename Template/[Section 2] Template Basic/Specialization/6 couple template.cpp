//#include <iostream>
//using namespace std;
//
//template<typename T> void printN(const T& cp)
//{
//	cout << T::N << endl;
//}
//
//template<typename T, typename U> struct couple
//{
//	T v1;
//	U v2;
//
//	enum { N = 2 };
//};
//
//// 2��° ���ڰ� couple�� ���
//template<typename A, typename B, typename C>
//struct couple<A, couple<B, C>>
//{
//	A v1;
//	couple<B, C> v2;
//
//	enum { N = couple<B, C>::N + 1 };
//};
//
//// 1��° ���ڰ� couple�� ���
//template<typename A, typename B, typename C>
//struct couple<couple<A, B>, C>
//{
//	couple<A, B> v2;
//	C v1;
//
//	enum { N = couple<A, B>::N + 1 };
//};
//
//template< typename A, typename B, typename C, typename D>
//struct couple<couple<A, B>, couple<C, D>>
//{
//	couple<A, B> v1;
//	couple<C, D> v2;
//
//	enum { N = couple<A, B>::N + couple<C, D>::N };
//};
//
//int main()
//{
//	couple<int, double> c1;
//
//	// 2��° ���ڰ� couple
//	couple<int, couple<int, char>> c2;
//	couple<int, couple<int, couple<int, char>>> c3;
//
//	printN(c1);
//	printN(c2);
//	printN(c3);
//
//	// 1��° ���ڰ� couple
//	couple<couple<int, int>, int> c4;
//	couple<couple<couple<int, int>, int>, int > c5;
//
//	printN(c4);
//	printN(c5);
//
//	// ��� couple
//	couple<couple<int, int>, couple<int, int>> c6;
//	printN(c6);
//}