//#include <iostream>
//#include <functional>
//
//using namespace std;
//
//
//
////template<typename T> void foo( T f )
////template<typename T> void foo(T& f)	// �ӽð�ü�� lvalue �� ������ ����.
//template<typename T> void foo(const T& f)	// �Ϸ��� �̷��� �ϴ� forwarding reference�� �޾ƶ�.
//{
//	f(1, 2);
//}
//
//int main()
//{
//	// Lambda Expression�� ��� ��� 3����.
//
//	// 1. �Լ� ��ü
//	auto f1 = [](int a, int b) { return a + b; };
//
//	// 2. �Լ� ������. ������ �ٸ� ���ٸ� ������ �ִ�.
//	int(*f2)(int, int) = [](int a, int b) { return a + b; };
//	// f2 = [](int a, int b) { return a - b; };
//
//	// 3. std::function.
//	function<int(int, int)> f3 = [](int a, int b) { return a + b; };
//
//	f1(1, 2);	// inlie ����.
//	f2(1, 2);	// inlie ��ƴ�.
//	f3(1, 2);	// inlie ��ƴ�.
//
//	
//	foo([](int a, int b) { return a + b; });
//	foo([](int a, int b) { return a - b; });
//}