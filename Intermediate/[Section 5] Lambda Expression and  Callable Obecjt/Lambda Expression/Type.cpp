//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	//int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	//// Ȱ�� 1. �Լ� ���ڷ� ���.
//	//sort(x, x + 10, [](int a, int b) { return a < b; });
//
//	////[](int a, int b) { return a + b; };	// �ӽ� ��ü ����
//	//int n = [](int a, int b) {return a + b; }(1, 2);
//
//	//// Ȱ�� 2. auto ������ ��Ƽ� �Լ� ó�� ���.
//	//auto f = [](int a, int b) { return a + b; };
//
//	//cout << f(1, 2) << endl;	// 3
//
//
//	// Ÿ�Կ� ���Ͽ� �˾ƺ���.
//
//	// f1 �� f2�� �ٸ� Ÿ���̴�. ��� lambda expression�� ���� �ٸ� Ÿ���̴�.
//	auto f1 = [](int a, int b) { return a + b; };
//	auto f2 = [](int a, int b) { return a + b; };
//
//	cout << typeid(f1).name() << endl;
//	cout << typeid(f2).name() << endl;
//}