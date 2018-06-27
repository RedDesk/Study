#include <iostream>

using namespace std;

//  �Լ� �����ε��� �����ϴ�.
void foo(int& a) { cout << "int&" << endl; }					// 1
void foo(const int& a) { cout << "const int&" << endl; }	// 2
void foo(int&& a) { cout << "int&&" << endl; }				// 3

int main()
{
	int n = 10;

	// 1. non const lvalue reference�� lvalue�� ���� ����
	int& r1 = n;		// ok
	//int& r2 = 10;		// error

	// 2. const lvalue reference�� lvalue�� rvalue�� ��� ���� ����.
	const int& r3 = n;	// ok
	const int& r4 = 10;	// ok �̰� ������ ����� �ִ�.

	//const Point& r = Point(1, 1);	// ����ų���� ������ ������� �����.
	//r.x = 10; // error	������ ��ĥ�� ��� 3���� �߰��� ���Դ�.

	// c++11 
	// 3. rvalue reference�� rvalue�� ����ų�� �ִ�. �׷��� ������ lvalue��.
	//int&& r1 = n;	// error
	int&& r2 = 10;	// ok



	// �Լ� ȣ�� �켱����
	foo(n);				// 1�� ������ 2��
	foo(10);			// 3�� ������ 2��

	int& r5 = n;
	foo(r5);

	int&& r6 = 10;		// 10�� rvalue,
						// 10�� ����Ű�� �̸��ִ� r6 ���������� lvalue��.
	foo(r6);			// 1��

	foo(static_cast<int&&>(r6)); // 3��.
}