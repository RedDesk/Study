#include <iostream>
using namespace std;

// Ŭ���� ���� ����
// ��ü�� ���������� �����ʹ� �����ϴ�. ��ü�� ������� ���ǰ� ���־�� �Ѵ�.
class Test;
Test* p;		// �ҿ����� Ÿ��( incomplete type )�� delete�� �Ҹ��� ȣ�� �ȵ�.


class Test
{
public:
	Test() { cout << "Test()" << endl; }
	~Test() { cout << "~Test()" << endl; }
};

// chcecked delete ��� �Ѵ�.
void foo(Test* p)
{
	// ���� ���
	static_assert(sizeof(Test) > 0, "error, incomplete");
	// �������
	//sizeof(Test);	// sizeof�� ������ Ÿ�Ը� �����ϴ�. error�� ����´�.
	delete p;
}

int main()
{
	Test* p = new Test;
	foo(p);

	// �ι��� ���ڷ� default_delete �Լ� ��ü�� �־��ش�.
	// default_delete�� �Լ� ��ü�� () �����ڸ� ������ �������̴�. 
	// ���� �ڵ带 Ȯ���ϸ� static_assert(0 < sizeof (_Uty), "can't delete an incomplete type"); 
	unique_ptr<Test> up(new Test);
	shared_ptr<Test> sp(new Test);
}