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
//	// ��ȣ�� ���ʿ� �ִ� ������Ʈ�� 
//	// ��� ������ �Լ� ������.
//	// ()�����ڸ� �������� Ŭ����.
//	// Lambda Expression
//	// !!!!!!!!!! �Լ��� �Լ��� ����Ű�� ������ Function Object�� �ƴϴ�. !!!!!!!!!!
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
//	// Callable Object ( Function���� �� ū ���� )
//	// Function Object
//	// Pointer to memeber
//
//	// �Ϲ� �Լ�
//	invoke(&foo, 10, 20);
//
//	// ��� �Լ�
//	Dialog dlg;
//	invoke(&Dialog::setColor, &dlg, 20);
//
//	// ��� ����
//	invoke(&Dialog::color, &dlg) = 20;		// dlg.color = 20
//	cout << dlg.color << endl;				// 20 
//
//}