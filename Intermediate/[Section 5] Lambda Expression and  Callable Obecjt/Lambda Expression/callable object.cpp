//#include <iostream>
//#include <functional>
//
//using namespace std;
//
//void foo(int a, int b)
//{
//
//}
//
//class Dialog
//{
//public:
//	int color;
//	void setColor(int c) { color = c; }
//};
//
//
//int main()
//{
//	// Function Object
//	// 괄호의 왼쪽에 있는 오브젝트는 
//	// 모든 종류의 함수 포인터.
//	// ()연산자를 재정의한 클래스.
//	// Lambda Expression
//	// !!!!!!!!!! 함수와 함수를 가리키는 참조는 Function Object가 아니다. !!!!!!!!!!
//
//	void(&r)(int, int) = foo;
//	r(1, 2);
//
//	foo(1, 2);
//	less<int> f;
//	f(1, 2);
//	[](int a, int b) { return a + b; } (1, 2);
//
//
//	// Callable Object ( Function보다 더 큰 범위 )
//	// Function Object
//	// Pointer to memeber
//
//	// 일반 함수
//	invoke(&foo, 10, 20);
//
//	// 멤버 함수
//	Dialog dlg;
//	invoke(&Dialog::setColor, &dlg, 20);
//
//	// 멤버 변수
//	invoke(&Dialog::color, &dlg) = 20;		// dlg.color = 20
//	cout << dlg.color << endl;				// 20 
//
//}