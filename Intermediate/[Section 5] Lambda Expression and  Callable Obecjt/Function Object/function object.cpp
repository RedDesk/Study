//#include <iostream>
//using namespace std;
//
//// ��κ� () �����ڸ� ���� class���� struct�� �ؼ� public�� ���� �ʴ´�.
////class Plus
//template<typename T>
//struct Plus
//{
//	//public :
//	T operator()(T a, T b) const
//	{
//		return a + b;
//	}
//};
//
//void foo(const Plus<int>& p)		// Plus�� ��ü�� ������ �����°� ����.
//{
//	int n = p(1, 2);				// ��� ��ü�� ��� �Լ��� �θ��� �ִ�.
//}
//int main()
//{
//	Plus<int> p;
//
//	int n = p(1, 2);	// ��ü�� �Լ�ó�� ���� functor or function object �� �θ���.
//	cout << n << endl;
//
//	// �̰ɾ˾ƾ� ��ü�� �Լ�ó�� ȣ��Ǵ°� �˼� �ִ�.
//	// a + b;		// a.operator+(b)
//	// a - b;		// a.operator-(b)
//	// a();			// a.operator()()
//	// a(1,2);		// a.operator()(1,2)
//}