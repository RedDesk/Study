//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	// �� ��å���� �Լ���ü ���.
//	sort(x, x + 10, less<int>());
//	
//	// c++11 ���� ǥ����.
//	sort(x, x + 10, [](int a, int b) {return a < b; });				// ���ٽ��� �ᱹ �ӽð�ü�� �̿��Ѱ�.
//																	// class ClosureType
//																	//{
//																	//	public:
//																	//		bool operator()(int a, int b) const
//																	//		{
//																	//			return a < b;
//																	//		}
//																	//};
//	bool b = [](int a, int b) { return a < b; }(1, 2);
//	cout << b << endl;
//}