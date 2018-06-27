#include <iostream>
#include <bitset>
using namespace std;

//bitset<10> bs;
//void clear_random() { bs.reset(); }
//
//// 0~9 사이의 중복되지 않은 난수를 리턴하는 함수.
// 일반 함수는 동작을 정의하지만 상태를 나타낼수 없다.
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


// functor로 해결.
// 동작과 상태가 있다.
class Random
{
	bitset<10> bs;
public:
	Random()
	{
		bs.reset();	// 모든 비트를 0으로 초기화.
	}

	// 0~9 사이의 중복되지 않은 난수를 리턴하는 함수.
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