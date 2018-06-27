#include <iostream>
#include <bitset>
using namespace std;

//bitset<10> bs;
//void clear_random() { bs.reset(); }
//
//// 0~9 ������ �ߺ����� ���� ������ �����ϴ� �Լ�.
// �Ϲ� �Լ��� ������ ���������� ���¸� ��Ÿ���� ����.
//int random()
//{
//	int v = -1;
//	
//	do
//	{
//		v = rand() % 10;
//	} while (bs.test(v));
//	
//	bs.set(v);
//	return v;
//}
//
//int main()
//{
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << random() << " ";
//	}
//}


// functor�� �ذ�.
// ���۰� ���°� �ִ�.
class Random
{
	bitset<10> bs;
public:
	Random()
	{
		bs.reset();	// ��� ��Ʈ�� 0���� �ʱ�ȭ.
	}

	// 0~9 ������ �ߺ����� ���� ������ �����ϴ� �Լ�.
	int operator()()
	{
		int v = -1;

		do
		{
			v = rand() % 10;
		} while (bs.test(v));

		bs.set(v);
		return v;
	}
};




int main()
{
	Random random;

	for (size_t i = 0; i < 10; i++)
	{
		cout << random() << " ";
	}
}