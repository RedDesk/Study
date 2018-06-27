//#include <algorithm>
//#include <iostream>
//using namespace std;
//
//
//
//// 일반함수는 자신만의 타입이 없다.
//// signature가 동일하면 모두 같은 타입이다.
//// 둘은 다른 함수지만 같은 타입의 함수다.
//// 이 함수들은 함수 포인터를 이용해서 호출하게 되면 inline의 장점을 쓸수 없다.
//inline bool cmp1(int a, int b) { return a > b; }
//inline bool cmp2(int a, int b) { return a < b; }
//
//
//// 함수 객체는 자신만의 타입이 있다.
//// signature가 동일 해도 모든 함수객체는 다른 타입이다.
//struct Less
//{
//	inline bool operator()(int a, int b) const { return a < b; }
//};
//
//struct Greater
//{
//	inline bool operator()(int a, int b) const { return a < b };
//};
//
//
//// 변하지 않은 전체 흐름속에서 변경되는 부분만 분리한다.
////void Sort(int* x, int n, bool(*cmp)(int, int))
////void Sort(int* x, int n, Less cmp)					// 함수 객체로 받으면 inline 객체 치환이 가능하다.
//template <typename T>
//void Sort(int* x, int n, T cmp)							// 정책 변경가능하고 정책이 인라인 치환되는 함수. ( 템플릿 + 함수 객체 )
//{														// sort가 functor 갯수 만큼 늘어난다.
//	for (size_t i = 0; i < n - 1; i++)
//	{
//		for (size_t j = 0; j < j < n; j++)
//		{
//			//if (x[i] > x[j])
//			if (cmp(x[i], x[j]))
//				swap(x[i], x[j]);
//		}
//	}
//}
//
//int main()
//{
//	int x[10] = { 1,3,5,6,7,2,4,6,8,10 };
//	//Sort(x, 10, cmp1);
//
//	Less f1;
//	Greater f2;
//
//	Sort(x, 10, f1);	// ok
//	Sort(x, 10, f2);	// error
//}