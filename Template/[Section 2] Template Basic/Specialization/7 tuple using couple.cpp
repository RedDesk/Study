//#include <iostream>
//using namespace std;
//
//template<typename T, typename U> struct couple
//{
//	T v1;
//	U v2;
//
//	enum { N = 2 };
//};
//
//// empty class 
//// �ƹ� ����� ���� Ŭ����.
//// ũ��� �׻� 1 sizeof(Null).
//// �ƹ� ����� ������ "Ÿ��" �̹Ƿ� �Լ� �����ε��̳� ���ø� ���ڷ� Ȱ�� ����.
//struct Null {};
//
//template<typename p1, typename p2, typename p3 = Null, typename p4 = Null, typename p5 = Null>
//class xtuple : public couple<p1, xtuple<p2, p3, p4, p5, Null>>
//{
//
//};
//
//// 2���� ���ڸ� ������ Ư��ȭ ����.
//template<typename p1, typename p2>
//class xtuple<p1, p2, Null, Null, Null>
//	: public couple<p1, p2>
//{
//
//};
//
//
//int main()
//{
//	// ���������� ���� �ְ� �ٲ㺸��
//	xtuple<int, char, long, short, double> t5;
//
//
//	// c++11 variadic template�� �̿��ϸ� ������ ������ ���ټ� �ִ�.
//}