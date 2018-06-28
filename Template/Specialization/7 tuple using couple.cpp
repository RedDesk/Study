//#include <iostream>
//using namespace std;
//
//template<typename T, typename U> struct couple
//{
//	T v1;
//	U v2;
//
//	enum { N = 2 };
//};
//
//// empty class 
//// 아무 멤버도 없는 클래스.
//// 크기는 항상 1 sizeof(Null).
//// 아무 멤버도 없지만 "타입" 이므로 함수 오버로딩이나 템플릿 인자로 활용 가능.
//struct Null {};
//
//template<typename p1, typename p2, typename p3 = Null, typename p4 = Null, typename p5 = Null>
//class xtuple : public couple<p1, xtuple<p2, p3, p4, p5, Null>>
//{
//
//};
//
//// 2개의 인자만 가지는 특수화 버전.
//template<typename p1, typename p2>
//class xtuple<p1, p2, Null, Null, Null>
//	: public couple<p1, p2>
//{
//
//};
//
//
//int main()
//{
//	// 선형적으로 쓸수 있게 바꿔보자
//	xtuple<int, char, long, short, double> t5;
//
//
//	// c++11 variadic template을 이용하면 개수의 제한을 없앨수 있다.
//}