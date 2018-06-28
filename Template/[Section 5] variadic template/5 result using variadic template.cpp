//#include <iostream>
//#include <type_traits>
//using namespace std;
//
//// 함수의 정보를 구하는 traits 만들기
//// 가변인자를 이용하여 만들기
//
//double hoo(short a, int b) { return 0; }
//
//// 잘못 사용할때 처리 방법.
////template<typename T> struct result_type
////{
//	//typedef T type;									// 1. 제공을 하지 않는다. 
//	//static_assert(is_function<T>::value, "error");	// 2. static_assert.
////};
//
//// 3. 선언부만 남긴다.
//template<typename T> struct result_type;
//
//template<typename R, typename ... Types>
//struct result_type<R(Types ...)>
//{
//	typedef R type;
//};
//
//template<typename T> void foo(const T& t)
//{
//	typename result_type<T>::type ret;
//	cout << typeid(ret).name() << endl;
//}
//
//int main()
//{
//	foo(hoo);
//	/*int n = 0;
//	foo(n);*/
//}