//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//
//
//// �Ϲ��Լ��� �ڽŸ��� Ÿ���� ����.
//// signature�� �����ϸ� ��� ���� Ÿ���̴�.
//// ���� �ٸ� �Լ����� ���� Ÿ���� �Լ���.
//// �� �Լ����� �Լ� �����͸� �̿��ؼ� ȣ���ϰ� �Ǹ� inline�� ������ ���� ����.
//inline bool cmp1(int a, int b) { return a > b; }
//inline bool cmp2(int a, int b) { return a < b; }
//
//
//// �Լ� ��ü�� �ڽŸ��� Ÿ���� �ִ�.
//// signature�� ���� �ص� ��� �Լ���ü�� �ٸ� Ÿ���̴�.
//struct Less
//{
//	inline bool operator()(int a, int b) const { return a < b; }
//};
//
//struct Greater
//{
//	inline bool operator()(int a, int b) const { return a < b };
//};
//
//
//// ������ ���� ��ü �帧�ӿ��� ����Ǵ� �κи� �и��Ѵ�.
////void Sort(int* x, int n, bool(*cmp)(int, int))
////void Sort(int* x, int n, Less cmp)					// �Լ� ��ü�� ������ inline ��ü ġȯ�� �����ϴ�.
//template <typename T>
//void Sort(int* x, int n, T cmp)							// ��å ���氡���ϰ� ��å�� �ζ��� ġȯ�Ǵ� �Լ�. ( ���ø� + �Լ� ��ü )
//{														// sort�� functor ���� ��ŭ �þ��.
//	for (size_t i = 0; i < n - 1; i++)
//	{
//		for (size_t j = 0; j < j < n; j++)
//		{
//			//if (x[i] > x[j])
//			if (cmp(x[i], x[j]))
//				swap(x[i], x[j]);
//		}
//	}
//}
//
//int main()
//{
//	int x[10] = { 1,3,5,6,7,2,4,6,8,10 };
//	//Sort(x, 10, cmp1);
//
//	Less f1;
//	Greater f2;
//
//	Sort(x, 10, f1);	// ok
//	Sort(x, 10, f2);	// error
//}