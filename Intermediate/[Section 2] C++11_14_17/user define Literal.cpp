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
//Meter operator""_m(unsigned long long a) // 사용자 정의 literal은 _를 붙여야 한다 없는건 표준에서만 쓰겠다...
//{
//	return Meter(static_cast<int>(a));
//}
//
//int main()
//{
//	Meter m = 3_m;
//	// c++ 표준에 있따.
//	// string "hello"s;
//	// chrono 1h + 2min + 30s;
//}