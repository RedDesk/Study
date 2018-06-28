//#include <iostream>
//using namespace std;
//
////// default parameter는 primary template만 가능하다!!!!
//template<typename T, int N = 10> class Stack
//{
//	T buff[N];
//
//public:
//	static void foo() { cout << "T" << endl; }
//	T pop() {}
//	void push(T a);
//};
//
// //default값은 primary template것을 가져다 쓴다!!!!!
//template<typename T, int N> class Stack<T*, N>
//{
//	T* buff[N];
//
//public:
//	static void foo() { cout << "T*" << endl; }
//	T pop() {}
//	void push(T* a);
//};
//
//
//template<typename T, int N> void Stack<T,N>::push(T a)
//{
//	cout << "T" << endl;
//}
//
//template<typename T, int N> void Stack<T*,N>::push(T* a)
//{
//	cout << "T*" << endl;
//}
//
//template<> void Stack<char*>::push(char* a)
//{
//	cout << "char*" << endl;
//}
//
//
//int main()
//{
//	//Stack<int>::foo();		// 
//	//Stack<int*>::foo();		// 부분 특수화 하면 int* == T*  T는 int로 된다. 일반템플릿은 int*
//
//
//	//Stack<int, 10> s1;
//	//Stack<int> s2; // N = 10
//	//Stack<int*> s3; // N = 10
//
//	Stack<int> s1;	
//	s1.push(0);
//
//	Stack<char*> s2;
//	s2.push(0);
//
//}
