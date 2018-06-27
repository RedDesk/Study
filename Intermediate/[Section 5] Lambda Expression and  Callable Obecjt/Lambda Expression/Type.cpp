//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	//int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	//// 활용 1. 함수 인자로 사용.
//	//sort(x, x + 10, [](int a, int b) { return a < b; });
//
//	////[](int a, int b) { return a + b; };	// 임시 객체 생성
//	//int n = [](int a, int b) {return a + b; }(1, 2);
//
//	//// 활용 2. auto 변수에 담아서 함수 처럼 사용.
//	//auto f = [](int a, int b) { return a + b; };
//
//	//cout << f(1, 2) << endl;	// 3
//
//
//	// 타입에 대하여 알아보자.
//
//	// f1 과 f2는 다른 타입이다. 모든 lambda expression은 서로 다른 타입이다.
//	auto f1 = [](int a, int b) { return a + b; };
//	auto f2 = [](int a, int b) { return a + b; };
//
//	cout << typeid(f1).name() << endl;
//	cout << typeid(f2).name() << endl;
//}