//#include <iostream>
//using namespace std;
//
////// default parameter�� primary template�� �����ϴ�!!!!
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
// //default���� primary template���� ������ ����!!!!!
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
//	//Stack<int*>::foo();		// �κ� Ư��ȭ �ϸ� int* == T*  T�� int�� �ȴ�. �Ϲ����ø��� int*
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
