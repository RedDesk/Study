//#include <iostream>
//using namespace std;
//
//int main()
//{
//	auto f1 = [](int a, int b) { return a + b; };			// 컴파일러가 추론해준다.
//	auto f2 = [](int a, int b) -> int { return a + b; };	// 리턴 타입을 명시적으로 후위형으로 쓴다.
//
//	auto f3 = [](int a, int b)								// 리턴 타입이 같기떄문에 괜찮다.
//	{
//		if (a == 1)
//			return a;
//		else
//			return b;
//	};
//
//	auto f4 = [](int a, double b)	-> double				// 리턴 타입이 달라서 명시적으로 표현해야 한다.
//	{
//		if (a == 1)
//			return a;
//		else
//			return b;
//	};
//}