//#include <iostream>
//#include <set>
//#include <functional>
//
//using namespace std;
//
//
////typedef set<int, greater<int>> des_set;					// 다른 버전이 필요할 경우 계속 정의 해야한다..
////typedef set<double, greater<double>> des_set_double;
//
////template<typename T> typedef set<T, greater<T>> des_set;	// error typedef는 c문법이라 template를 할수 없다.
//
//// C++11 using : template의 별명이 가능하다.
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