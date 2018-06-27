//#include <iostream>
//using namespace std;
//
//void foo(int& a) { cout << "int&" << endl; }
//void foo(int&& a) { cout << "int&&" << endl; }
//
//class Test
//{
//	int data;
//public:
//	int& get() & { return data; }
//	int get() && { return data; }
//};
//
//// lvalue�� ���ڷ� ���� forward
//template<typename T>
////T&& xforward(T& arg) �Ͻ��� Ÿ���߷��� �����ؼ� ���� �ʴ�.
//T&& xforward(typename remove_reference<T>::type& arg)
//{
//	return static_cast<T&&>(arg);
//}
//
//// rvalue�� ���ڷ� ���� forward
//// rvalue�� ���ڷ� �޾Ƽ� rvalue�� ĳ�����ϴ� xforward.
//// T&&�� rvalue�� �ƴϰ� forwarding reference �̴�. T�� ���۷����� �����ϰ� && ���δ�.
//template<typename T>
//T&& xforward(typename remove_reference<T>::type&& arg)
//{
//	return static_cast<T&&>(arg);
//}
//
//// wrapper �Լ��� ���� perfect forward�� �Ϸ��� ����
//// perfect forward�� �⺻ ��Ģ�� ��� ���ڸ� forward�� ������ ���� lvalue, rvalue�Ѵ� �ʿ��� ��찡 �ְ�
//// xforward�� lvalue�� �ִ�. �׷��� 2������ �� ����Ҽ� �־�� �Ѵ�.
//template<typename T> void wrapper(T&& obj)
//{
//	//foo(obj.get());									// �̰�쿡 obj�� lvalue�� ������ get�Լ��� lvalue������ ȣ��ȴ�.
//	//foo(xforward<T>(obj).get());						// perfect fowarding�� ��ü�� forwarding �ؾ� �ϴµ� obj�� forwarding �ߴ�.
//
//	using Type = decltype(xforward<T>(obj).get());		// ���� forwarding �ߴ��� xforward�� lvalue�� ������ �ȵȴ�.
//	foo(xforward<Type>(xforward<T>(obj).get()));
//}
//
//int main()
//{
//	Test t;
//	wrapper(t);			// lvalue => foo(int&)			!!���� wrapper �Լ��� ���� arg�� lvalue �̱� ������ obj.get() �Լ��� lvalue ������ ȣ��ȴ�.
//	wrapper(Test());	// rvalue => foo(int&&)		
//
//	foo(t.get());		// foo(int&) => foo(int&)
//	foo(Test().get());	// foo(int) => foo(int&&)
//}
//
