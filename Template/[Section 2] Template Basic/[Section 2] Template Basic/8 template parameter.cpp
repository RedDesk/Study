//#include <iostream>
//using namespace std;
//
//// ���ø� ���ڷ� ��밡���� ��.
//// 1. type
//// 2. value( non-type )
//// 3. template
//
//// type parameter
//template<typename T>
//class List
//{
//};
//
//// non-type parameter
//// 1. ������ ���(�Ǽ� �ȵ�)
//template<int N> class Test1 {};
//
//// 2. enum ���
//enum Color { red = 1, green = 2 };
//template<Color> class Test2 {};
//
//// 3. ������ (�������� �ּҾȵ�, �������� �ּ� ����)
//// ��Ȯ���� no linkage�� ������ ���� �ּҴ� �ȵ�.
//template<int*> class Test3 {};
//int x = 0;
//
//// 4. �Լ� ������
//template<int(*)(void)> class Test4{};
//
//// 5. ��� �Լ� ������
//// 6. auto C++17 ����...
//template<auto N> class Test6
//{
//public :
//	Test6()
//	{
//		cout << typeid(N).name() << endl;
//	}
//};
//
//int main()
//{
//	int n = 10;
//
//	Test1<10> t1;
//	//	Test1<n> t2;
//	Test2<red> t3;
//	//	Test3<&n> t4; // error
//	Test3<&x> t5;
//	Test4<&main> t6;
//
//	Test6<10> t7;	
//	Test6<&x> t9;
//	Test6<&main> t10;
//}