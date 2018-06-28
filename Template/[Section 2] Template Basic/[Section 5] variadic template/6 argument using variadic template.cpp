//#include <iostream>
//#include <type_traits>
//using namespace std;
//
//
//double hoo(short a, int b, char c) { return 0; }
//
//template<size_t N, typename T> struct argument_type
//{
//	typedef T type;
//};
//
//// N == 0 부분 특수화 
//template<typename R, typename A1, typename ... Types>
//struct argument_type<0, R(A1, Types ...)>
//{
//	typedef A1 type;
//};
//
//// N 일때 부분 특수화
//// 재귀를 이용하여 첫번째 요소를 버리는 형태로 하여
//// N == 0 일때의 부분 특수화 버전이 호출되도록 한다.
//template<size_t N, typename R, typename A1, typename ... Types>
//struct argument_type<N, R(A1, Types ...)>
//{
//	typedef typename argument_type<N - 1, R(Types...)>::type type;
//};
//
//template<typename T> void foo(const T& t)
//{
//	typename argument_type<3, T>::type ret;
//	cout << typeid(ret).name() << endl;
//}
//
//int main()
//{
//	foo(hoo);
//}