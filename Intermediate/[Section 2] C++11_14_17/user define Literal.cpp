//#include <iostream>
//using namespace std;
//
//class Meter
//{
//	int value;
//public:
//	Meter(int n) : value(n) {}
//};
//
//Meter operator""_m(unsigned long long a) // ����� ���� literal�� _�� �ٿ��� �Ѵ� ���°� ǥ�ؿ����� ���ڴ�...
//{
//	return Meter(static_cast<int>(a));
//}
//
//int main()
//{
//	Meter m = 3_m;
//	// c++ ǥ�ؿ� �ֵ�.
//	// string "hello"s;
//	// chrono 1h + 2min + 30s;
//}