//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// generic lambda : c++14
//	// 함수인자로는 불가하나 람다식엔 사용이 가능하다. (g++은 가능, microsoft는 불가)
//	auto f1 = [](auto a, auto b) { return a + b; };
//
//	cout << f1(1, 2.1) << endl;
//
//	// nullary lambda ( 인자가 없을때() 삭제한다 )
//	auto f2 = [] { return 10; };
//
//	// c++ 17
//	// 컴파일타임 함수로 만들어 달라.
//	auto f3 = [](int a, int b) constexpr
//	{
//		return a + b;
//	};
//
//	int y[f3(1, 2)];
//
//
//
//	auto f4 = [](int a, int b) { return a + b; };		// 이렇게 람다를 만들면 컴파일러는 디폴트 생성자를 삭제한다.
//	//decltype(f4) f5;									// 디폴트 생성자를 부르기 때문에 error 
//	decltype(f4) f6 = f4;								// 복사 생성자를 부르기 때문에 ok
//	decltype(f4) f6 = move(f4);							// ok
//														// 자세한건 cppreference.com 에 정리되어 있어.
//}
//
//
//class ClosureType
//{
//public :
//	template<typename T1, typename T2>
//	decltype(auto) operator()(T1 a, T2 b) const
//	{
//		return a + b;
//	}
//};