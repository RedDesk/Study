#include <iostream>

using namespace std;

//  함수 오버로딩이 가능하다.
void foo(int& a) { cout << "int&" << endl; }					// 1
void foo(const int& a) { cout << "const int&" << endl; }	// 2
void foo(int&& a) { cout << "int&&" << endl; }				// 3

int main()
{
	int n = 10;

	// 1. non const lvalue reference는 lvalue만 참조 가능
	int& r1 = n;		// ok
	//int& r2 = 10;		// error

	// 2. const lvalue reference는 lvalue와 rvalue를 모두 참조 가능.
	const int& r3 = n;	// ok
	const int& r4 = 10;	// ok 이건 문제가 생길수 있다.

	//const Point& r = Point(1, 1);	// 가르킬수는 있지만 상수성이 생긴다.
	//r.x = 10; // error	원본을 고칠수 없어서 3번이 추가로 나왔다.

	// c++11 
	// 3. rvalue reference는 rvalue만 가르킬수 있다. 그러나 성질은 lvalue다.
	//int&& r1 = n;	// error
	int&& r2 = 10;	// ok



	// 함수 호출 우선순위
	foo(n);				// 1번 없으면 2번
	foo(10);			// 3번 없으면 2번

	int& r5 = n;
	foo(r5);

	int&& r6 = 10;		// 10은 rvalue,
						// 10을 가리키는 이름있는 r6 참조변수는 lvalue다.
	foo(r6);			// 1번

	foo(static_cast<int&&>(r6)); // 3번.
}