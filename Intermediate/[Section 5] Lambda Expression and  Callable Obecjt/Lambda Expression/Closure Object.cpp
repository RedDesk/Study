//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int x[10] = { 1,3,5,7,9,2,4,6,8,10 };
//
//	// 비교 정책으로 함수객체 사용.
//	sort(x, x + 10, less<int>());
//	
//	// c++11 람다 표현식.
//	sort(x, x + 10, [](int a, int b) {return a < b; });				// 람다식은 결국 임시객체를 이용한것.
//																	// class ClosureType
//																	//{
//																	//	public:
//																	//		bool operator()(int a, int b) const
//																	//		{
//																	//			return a < b;
//																	//		}
//																	//};
//	bool b = [](int a, int b) { return a < b; }(1, 2);
//	cout << b << endl;
//}