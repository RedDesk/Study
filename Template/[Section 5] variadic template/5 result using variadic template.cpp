//#include <iostream>
//#include <type_traits>
//using namespace std;
//
//// �Լ��� ������ ���ϴ� traits �����
//// �������ڸ� �̿��Ͽ� �����
//
//double hoo(short a, int b) { return 0; }
//
//// �߸� ����Ҷ� ó�� ���.
////template<typename T> struct result_type
////{
//	//typedef T type;									// 1. ������ ���� �ʴ´�. 
//	//static_assert(is_function<T>::value, "error");	// 2. static_assert.
////};
//
//// 3. ����θ� �����.
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