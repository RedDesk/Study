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
//// N == 0 �κ� Ư��ȭ 
//template<typename R, typename A1, typename ... Types>
//struct argument_type<0, R(A1, Types ...)>
//{
//	typedef A1 type;
//};
//
//// N �϶� �κ� Ư��ȭ
//// ��͸� �̿��Ͽ� ù��° ��Ҹ� ������ ���·� �Ͽ�
//// N == 0 �϶��� �κ� Ư��ȭ ������ ȣ��ǵ��� �Ѵ�.
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