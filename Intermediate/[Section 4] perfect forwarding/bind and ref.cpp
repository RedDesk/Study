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
//	//void(*f)() = &foo;			// 함수포인터를 이용;
//
//	int n = 0;
//	function<void()> f2;	// function을 이용 <함수형> <함수포인터X>
//
//	f2 = bind(&goo, n);				// 값으로 고정.
//	f2 = bind(&goo, ref(n));		// 참조로 고정.
//									
//	/*
//	// 왜 참조로 하지 않는가 하면...
//	function<void()> f;
//	{
//		int n = 0;
//		f = bind(&goo, n);
//	}
//	//블록을 벗어나면 n은 파괴된다.
//	//*/
//
//	f2();	// goo(n);
//
//	cout << n << endl;
//}