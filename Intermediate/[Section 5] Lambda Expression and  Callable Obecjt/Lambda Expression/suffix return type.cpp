//#include <iostream>
//using namespace std;
//
//int main()
//{
//	auto f1 = [](int a, int b) { return a + b; };			// �����Ϸ��� �߷����ش�.
//	auto f2 = [](int a, int b) -> int { return a + b; };	// ���� Ÿ���� ��������� ���������� ����.
//
//	auto f3 = [](int a, int b)								// ���� Ÿ���� ���⋚���� ������.
//	{
//		if (a == 1)
//			return a;
//		else
//			return b;
//	};
//
//	auto f4 = [](int a, double b)	-> double				// ���� Ÿ���� �޶� ��������� ǥ���ؾ� �Ѵ�.
//	{
//		if (a == 1)
//			return a;
//		else
//			return b;
//	};
//}