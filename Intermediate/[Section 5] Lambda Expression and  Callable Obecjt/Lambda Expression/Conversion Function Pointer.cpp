//#include <iostream>
//
//int main()
//{
//	// ���� ǥ������ �Լ� �����ͷ� ��ȯ�ȴٴ� ���� ���ο� ��ȣ�� �Լ��� �����Ѵٴ� ���̴�.
//	// static �Լ��� ������� �־�� �Ѵ�.
//	int(*f)(int, int) = [](int a, int b)
//	{
//		return a + b;
//	};
//
//
//	// ĸ�ĸ� �Ⱦ��� ��쿡�� �Լ������ͷ� ��ȯ�� �����ϴ�.
//	/*
//	int v = 0;
//	int(*f1)(int, int) = [v](int a, int b)	// ����ƽ �Լ� �ȿ����� ����� �����ؼ� ����� �Ұ��ϴ�. error
//	{
//		return a + b;
//	};
//	*/
//}
//
//
//// ���� ���ٽ��� ���������� �̷��� ����� ����. 
//class ClosureType
//{
//	int v;	// ĸ�ĸ� ����ϸ�... 
//public:
//	int operator()(int a, int b) const
//	{
//		return  a + b;
//	}
//	// �Լ������ͷ��� ��ȯ�� ����� �ѱ�� ��� static �Լ��� �����Ϸ��� �� �����.
//	static int method(int a, int b)
//	{
//		return a + b;//+v; ??? static������ �̷��� ����� �Ұ��ϴ�.
//	}
//
//	typedef int(*F)(int, int);
//
//	operator F()
//	{
//		return &ClosureType::method;
//	}
//};