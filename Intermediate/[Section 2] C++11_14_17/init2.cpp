

#include <iostream>
using namespace std;

int cnt = 0;

class Test
{
public:
//	int data = 0; // member initializer

	int data = ++cnt;

	Test() {}
	Test(int n) {}  //: data(n) {} // �����ڿ��� ����� �����ϸ� ��� �̴ϼȶ������� ������ �ȵȴ�.
};

int main()
{
	Test t1;	// data = 1	
	Test t2(3);	// data = 3

	cout << cnt << endl; // 1

	cout << t1.data << endl;
	cout << t2.data << endl;
}
