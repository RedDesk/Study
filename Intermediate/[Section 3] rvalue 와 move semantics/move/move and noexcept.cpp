//#include <iostream>
//#include <vector>
//#include <type_traits>
//#include "Test.h"
//
//using namespace std;
//
//int main()
//{
//	/*
//	Test t1;
//	Test t2 = t1;		// copy
//	Test t3 = move(t2);	// move
//
//	bool b = is_nothrow_move_constructible<Test>::value;	// move�����ڰ� ���ܰ� �ִ��� ������ �˻�
//	cout << b << endl;
//	Test t4 = move_if_noexcept(t1);		// ���ܰ� ������ copy������ ������ move������
//	*/
//
//	//Test* p1 = new Test[2];
//	// ���� �����ÿ��� �޸� �Ҵ��� �����ڸ� ȣ������.
//	// ����Ʈ �����ڸ� �������� ������ �����ϱ�.
//	Test* p1 = static_cast<Test*>(operator new(sizeof(Test) * 2));
//	for (size_t i = 0; i < 2; i++)
//	{
//		new(&p1[i]) Test;
//	}
//
//	//Test* p2 = new Test[4];
//	//1. �ű� ���۴� �޸𸮸� �Ҵ��ϰ� �����ڴ� ȣ������ �ʴ´�.
//	Test* p2 = static_cast<Test*>(operator new(sizeof(Test) * 4));
//
//	// !!!!!!!! g++ �����Ϸ��� 2���� 3���� �ٲ���� �ִ� !!!!!!!! move �� ������ ���۸� ������.
//	// 2. ���ο� ��ü�� ����Ʈ ������ ȣ��
//	for (size_t i = 2; i < 4; i++)
//	{
//		new(&p2[i]) Test;	// ����Ʈ ������ ȣ��.
//	}
//
//	// 3. move_if_noexcept �̿��� ���� ���� �ڿ� �̵�or����.
//	for (size_t i = 0; i < 2; i++)
//	{
//		//p2[i] = move(p2[i]);	// move����..
//		// ������ ȣ���� �ʿ��ϴ� placement new�� ����.
//		// new(&p2[i]) Test;		// ����Ʈ ������ ȣ��.
//		// new(&p2[i]) Test(p1[i]);	// ���� ������.
//		// new(&p2[i]) Test(move(p1[i]));	// move������
//		new(&p2[i]) Test(move_if_noexcept(p1[i]));	// ���� �˻��� move ���.
//	}
//
//	// 3. ���� ���� ����.
//	// operator new ���� operator delete�� ����
//	for (size_t i = 0; i < 2; i++)
//	{
//		p1[i].~Test();
//	}
//	operator delete(p1);
//
//	// 4. �پ� ���۵� ����.
//	for (size_t i = 0; i < 4; i++)
//	{
//		p2[i].~Test();
//	}
//	operator delete(p2);
//
//	cout << "vector ----------" << endl;
//	// stl�� vector�� �̷������� �����Ѵ�.
//	vector<Test> v(2);
//	v.resize(4);
//
//}