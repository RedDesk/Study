//#include <iostream>
//using namespace std;
//
//// �Լ� ã�� ���� �� �˾Ƶ� ��.
//// 1. exactly matching
//// 2. template
//// 3. variable argument
//
//// SFINAE ����
//// 1. Substitution Failure Is Not An Error  ġȯ ���д� ������ �ƴϴ�!!
//// 2. �Լ� ���ø��� ���� T�� Ÿ���� �����ǰ� �Լ��� ����(instantiation)�Ϸ��� �Ҷ�
//// ���� Ÿ���̳� �Լ� ���� ��� ġȯ�� �����ϸ� ������ ������ �ƴ϶�, �Լ� �ĺ������� ���� �Ѵ�.
//// 3. ������ �̸��� �ٸ� �Լ��� �ִٸ� �ٸ� �Լ��� ����ϰ� �ȴ�.
//
//template<typename T>
//typename T::type foo(T t)	// int::type foo(int i) �������� ������ ���� �ʴ´�.
//{
//	cout << "T" << endl; return 0;
//}
//
//void foo(...)
//{
//	cout << "..." << endl;
//}
//
//int main()
//{
//	foo(3);
//}