//// 특수화
//
//#include <iostream>
//using namespace std;
//
//// primary template
//template<typename T> class Stack
//{
//public:
//	void push(T a) { cout << "T" << endl; }
//};
//
//// partial specialization( 부분 특수화, 부분 전문화 )
//template<typename T> class Stack<T*>
//{
//public:
//	void push(T* a) { cout << "T*" << endl; }
//};
//
//// specialization( 특수화, 전문화 )
//template<> class Stack<char*>
//{
//public:
//	void push(char* a) { cout << "char*" << endl; }
//};
//
//int main()
//{
//	Stack<int> s1; s1.push(0);
//	Stack<int*> s2; s2.push(0);
//	Stack<char*> s3; s3.push(0);
//}
//
//
//
//// Primary template 만 사용한 경우는
//// 틀은 한개에서 3가지가 만들어 진다.
//
//// Specialization을 사용하면
//// 틀은 3개 3가지가 만들어 진다.
//// 고급 기법 많은 곳에서 사용된다.