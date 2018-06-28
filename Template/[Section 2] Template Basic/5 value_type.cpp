//#include <iostream>
//#include <vector>
//#include <list>
//
//using namespace std;
//
////void print_first_element(vector<int>& v)
////{
////
////}
//
//// 모든타입의 vector
////template<typename T>
////void print_first_element(vector<T>& v)
////{
////	T n = v.front;
////	cout << n << endl;
////}
//
//// 모든 컨테이너
//template<typename T>
//void print_first_element(T& v)
//{
//	// T: list<double>
//	// double 이 필요하다
//	// typename T::value_type n = v.front();
//
//	// C++ 11
//	auto n = v.front();
//	cout << n << endl;
//}
//
//int main()
//{
//	vector<double> v = { 1,2,3 };
//	print_first_element(v);
//}