//#include <iostream>
//using namespace std;
//
//// ������ �ð� ������ ����� ������ ������ Ÿ������ �����.
//// 77,78�� ���� int Ÿ��������
//// int2type<77> int2type<78>�� �ٸ� Ÿ���̴�.
//// �Լ� ���� �ε��̳� , ���ø� ����, ��ӿ� ����� �� �ִ�.
//template<int N> struct int2type
//{
//	static constexpr int value = N;
//	//enum { value = N };
//};
//
//void foo(int n ){}
//void foo(double d) {}
//
//int main()
//{
//	foo(3);		// int����
//	foo(3.4);	// double����
//
//	// ���� ���� Ÿ���̴�.
//	// �ٸ� �Լ��� �θ��� ������?
//	foo(0);		
//	foo(1);
//
//	int2type<0> t0;
//	int2type<1> t1;		// t0, t1�� �ٸ� Ÿ���̹Ƿ� foo(t0), foo(f1)�� �ٸ� �Լ� ȣ��.
//}