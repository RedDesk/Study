//#include <iostream>
//
//using namespace std;
//
//class Test
//{
//public:
//	Test() {}
//	~Test() {}
//	Test(const Test& t) { cout << "Copy" << endl; }
//	Test(Test&& t) { cout << "move" << endl; }
//
//	Test& operator=(const Test& t) { return *this; }	// ���� ���Կ�����
//	Test& operator=(Test&& t) { return *this; }			// move ���Կ�����
//};
//
//
//int main()
//{
//	Test t1;
//	Test t2 = t1;							// copy
//	Test t3 = Test();						// move   *����ȭ�� ���� move�� �ѹ� �Ҹ�.
//	Test t4 = static_cast<Test&&>(t1);		// move
//											// ���簡 �ƴ� move �����ڸ� ȣ���� �޶�.
//	Test t5 = move(t2);						// move ���ο��� ����ó�� ĳ������ �Ѵ�.
//
//
//
//}