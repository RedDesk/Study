//#include <iostream>
//#include <tuple>
//using namespace std;
//
//// parameter pack���� �� ��Ҹ� ������ ���
//// 1. Pack Expansion : �迭�Ǵ� tuple�� ��´�.
//// 2. ��� ȣ��� ������ ȣ����� ����Ѵ�.
//
//template<typename ... Types> void foo(Types ... args)
//{
//	//int x[] = { args ... };
//	tuple<Types...> tp(args...);
//
//	cout << get<0>(tp) << endl;
//	cout << get<1>(tp) << endl;
//	cout << get<2>(tp) << endl;
//}
//
//
//void foo2() {}
//
//// �� ����� ���ó�� �������� foo2��� �Լ��� ������ ����� ����...
//template<typename T, typename ... Types>
//void foo2(T value, Types ... args)
//{
//	static int n = 0;		// ������ �Լ���� ����...
//	++n;
//
//	cout << n << " : " << value << endl;
//
//	foo2(args...);		// foo(3.4,"AAA") -> foo( "AA") -> foo() ���ڰ� ���� foo�Լ��� �ʿ���.
//}
//
//
//
//int main()
//{
//	//foo(1, 3.4, "AAA");
//	foo2(1, 3.4, "AAA");
//}