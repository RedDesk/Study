//#include <iostream>
//#include <functional>
//
//using namespace std;
//
//void foo() {}
//void goo(int& a) { a = 30; }
//
//int main()
//{
//	//void(*f)() = &foo;			// �Լ������͸� �̿�;
//
//	int n = 0;
//	function<void()> f2;	// function�� �̿� <�Լ���> <�Լ�������X>
//
//	f2 = bind(&goo, n);				// ������ ����.
//	f2 = bind(&goo, ref(n));		// ������ ����.
//									
//	/*
//	// �� ������ ���� �ʴ°� �ϸ�...
//	function<void()> f;
//	{
//		int n = 0;
//		f = bind(&goo, n);
//	}
//	//����� ����� n�� �ı��ȴ�.
//	//*/
//
//	f2();	// goo(n);
//
//	cout << n << endl;
//}