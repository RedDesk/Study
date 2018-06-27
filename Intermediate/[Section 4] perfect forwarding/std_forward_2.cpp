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
//// lvalue를 인자료 갖는 forward
//template<typename T>
////T&& xforward(T& arg) 암시적 타입추론이 가능해서 좋지 않다.
//T&& xforward(typename remove_reference<T>::type& arg)
//{
//	return static_cast<T&&>(arg);
//}
//
//// rvalue를 인자로 갖는 forward
//// rvalue를 인자로 받아서 rvalue로 캐스팅하는 xforward.
//// T&&는 rvalue가 아니고 forwarding reference 이다. T의 레퍼런스를 삭제하고 && 붙인다.
//template<typename T>
//T&& xforward(typename remove_reference<T>::type&& arg)
//{
//	return static_cast<T&&>(arg);
//}
//
//// wrapper 함수를 통해 perfect forward를 하려고 보니
//// perfect forward의 기본 원칙인 모든 인자를 forward로 묶으려 보니 lvalue, rvalue둘다 필요한 경우가 있고
//// xforward가 lvalue만 있다. 그래서 2가지를 다 사용할수 있어야 한다.
//template<typename T> void wrapper(T&& obj)
//{
//	//foo(obj.get());									// 이경우에 obj가 lvalue기 때문에 get함수는 lvalue버전만 호출된다.
//	//foo(xforward<T>(obj).get());						// perfect fowarding은 전체를 forwarding 해야 하는데 obj만 forwarding 했다.
//
//	using Type = decltype(xforward<T>(obj).get());		// 전부 forwarding 했더니 xforward가 lvalue만 있으면 안된다.
//	foo(xforward<Type>(xforward<T>(obj).get()));
//}
//
//int main()
//{
//	Test t;
//	wrapper(t);			// lvalue => foo(int&)			!!주의 wrapper 함수의 내부 arg는 lvalue 이기 때문에 obj.get() 함수가 lvalue 버전만 호출된다.
//	wrapper(Test());	// rvalue => foo(int&&)		
//
//	foo(t.get());		// foo(int&) => foo(int&)
//	foo(Test().get());	// foo(int) => foo(int&&)
//}
//
