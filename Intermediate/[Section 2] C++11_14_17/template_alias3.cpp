//#include <iostream>
//#include <set>
//#include <functional>
//
//using namespace std;
//
//
////typedef set<int, greater<int>> des_set;					// �ٸ� ������ �ʿ��� ��� ��� ���� �ؾ��Ѵ�..
////typedef set<double, greater<double>> des_set_double;
//
////template<typename T> typedef set<T, greater<T>> des_set;	// error typedef�� c�����̶� template�� �Ҽ� ����.
//
//// C++11 using : template�� ������ �����ϴ�.
//
//template<typename T>
//using des_set = set<T, greater<T>>;		// ok
//
//int main()
//{
//	//set<int, greater<int>> s = { 1,3,5,7,9,2,4,6,8,10 };
//
//	des_set<int> s = { 1,3,5,7,9,2,4,6,8,10 };
//
//	des_set<double> sd;
//
//	for (auto& n : sd)
//	{
//		cout << n << endl;
//	}
//}