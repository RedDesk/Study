//#include <iostream>
//
//using namespace std;
//
//int x = 10;
//int& foo(int a) { cout << "foo" << endl; return x; }
//void goo(int& a) { cout << "goo" << endl; a = 30; }
//void hoo(int&&) { cout << "hoo" << endl; }
//
//
//void fo(int a, int&b, double d) { b = 30; }
//void go() {}
//
//// �Ϻ��� ���� : �����Լ��� ���ڸ� �޾Ƽ� ���� �Լ����� �Ϻ��ϰ� �����ϴ� ����.
//// �ٽ� 1. �Լ� ���ڸ� ������ reference�� ����ؾ� �Ѵ�.
//// �ٽ� 2. lvalue reference, rvalue reference 2���� ������ �����ؾ� �Ѵ�.
//// �ٽ� 3. rvalue reference ������ ���ڸ� ���� �Լ��� ������ �� rvalue�� ĳ�����ؼ� �Ѱž� �Ѵ�.
//
////template <typename F >
////void chronometry(F f, int& arg)
////{
////	f(arg);
////}
////
////template <typename F >
////void chronometry(F f, int&& arg)
////{
////	f(static_cast<int&&>(arg));
////}
//
//
//// forwarding reference�� ����� �ΰ��� ������ ��� �����Ҽ� �ִ�.
//// int& : lvalue��
//// int&& : rvalue��
//// T& : ��� Ÿ�� lvalue
//// T&& : ���Ÿ�� lvalue, rvalue ��� �޴´�.
//
///*
//f�� ���ʿ� �־ ���� ����ο��� ���� ����.
//template <typename F, typename T>
//decltype(f(std::forward<T>(arg))) chronometry(F f, T&& arg)
//{
//	// static_cast�� ������ Ÿ���̱� ������
//	// lvalue ���� �Լ����� ����ȭ�� ���� �������.
//	//f(static_cast<T&&>(arg));
//	return f(std::forward<T>(arg));
//}
//*/
//
///*
//// ������ ������ �̿��Ѵ�. C++11
//template <typename F, typename T>
//auto chronometry(F f, T&& arg) -> decltype(f(std::forward<T>(arg)))
//{
//	return f(std::forward<T>(arg));
//}
////*/
//
///*
//// �������� �ȴ�. C++ 14
//// ������ ���� �Լ��� ������ �����ϸ� ���װ� �߻��Ѵ�.
//// auto�� �����Ӽ��� �����Ѵ�.
//template <typename F, typename T>
//auto chronometry(F f, T&& arg)
//{
//	return f(std::forward<T>(arg));
//}
//*/
//
///*
//// C++ 14
//template <typename F, typename T>
//decltype(auto) chronometry(F f, T&& arg)
//{
//	return f(std::forward<T>(arg));
//}
////*/
//
////*
//// ���� ���ڰ� ����
//template<typename F, typename ... Types>
//decltype(auto) chronometry(F f, Types&& ... args)
//{
//	return f(std::forward<Types>(args)...);
//}
//
////*/
//
//int main()
//{
//	chronometry(&fo, 1, x, 3.4);
//	chronometry(&go);
//}