//#include <iostream>
//using namespace std;
//
//// 컴파일 시간 정수형 상수를 각각의 독립된 타입으로 만든다.
//// 77,78은 같은 int 타입이지만
//// int2type<77> int2type<78>은 다른 타입이다.
//// 함수 오버 로딩이나 , 템플릿 인자, 상속에 사용할 수 있다.
//template<int N> struct int2type
//{
//	static constexpr int value = N;
//	//enum { value = N };
//};
//
//void foo(int n ){}
//void foo(double d) {}
//
//int main()
//{
//	foo(3);		// int버전
//	foo(3.4);	// double버전
//
//	// 둘은 같은 타입이다.
//	// 다른 함수를 부를수 있을까?
//	foo(0);		
//	foo(1);
//
//	int2type<0> t0;
//	int2type<1> t1;		// t0, t1은 다른 타입이므로 foo(t0), foo(f1)은 다른 함수 호출.
//}