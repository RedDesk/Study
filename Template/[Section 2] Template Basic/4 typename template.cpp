//#include <iostream>
////
////class Test
////{
////public :
////	enum { value1 = 1 };
////	static int value2;
////
////	typedef int INT;
////	using SHORT = short;		// C++11
////
////	class innerClass {};
////};
////
////int Test::value2 = 1;
////
////int main()
////{
////	int n1 = Test::value1;					// Ŭ���� �̸�:: ���� ���� ������ ��ҵ� 
////	int n2 = Test::value2;					// �� : enum ���, static ��� ����
////											// Ÿ�� : typedef, using
////	Test::INT a;
////	Test::SHORT b;
////	Test::innerClass c;
////}
//
//
////int p = 0;
//
//class Test
//{
//public:
//	//enum { DWORD = 5};
//	typedef int DWORD;
//};
//
//template< typename T>
//typename T::DWORD foo(T t)
//{
//	// ��� �ؼ��ǳ�?
//	// T�� Ŭ������ ��� ���� ���� �ʴ´�.
//	//T::DWORD * p;		// �� : 5 * p
//						//Ÿ��: �������� ������p�� ����
//
//	T::DWORD * p;  // ������ �ؼ��Ѵ�. ����ũ�� ����Ʈ �������� �տ� typename�� �����Ѵ�. �׷��� �������� ������ ���� ������ ����.
////	typename T::DWORD * p; // Ÿ������ �ؼ��Ѵ�. ���ø��� ��츸 ���� Test::DWORD* p��  error
//
//	return 0;
//}
//
//int main()
//{
//	Test t;
//	foo(t);
//}