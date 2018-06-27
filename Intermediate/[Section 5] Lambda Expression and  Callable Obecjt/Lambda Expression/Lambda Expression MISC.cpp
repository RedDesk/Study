//#include <iostream>
//using namespace std;
//
//int main()
//{
//	// generic lambda : c++14
//	// �Լ����ڷδ� �Ұ��ϳ� ���ٽĿ� ����� �����ϴ�. (g++�� ����, microsoft�� �Ұ�)
//	auto f1 = [](auto a, auto b) { return a + b; };
//
//	cout << f1(1, 2.1) << endl;
//
//	// nullary lambda ( ���ڰ� ������() �����Ѵ� )
//	auto f2 = [] { return 10; };
//
//	// c++ 17
//	// ������Ÿ�� �Լ��� ����� �޶�.
//	auto f3 = [](int a, int b) constexpr
//	{
//		return a + b;
//	};
//
//	int y[f3(1, 2)];
//
//
//
//	auto f4 = [](int a, int b) { return a + b; };		// �̷��� ���ٸ� ����� �����Ϸ��� ����Ʈ �����ڸ� �����Ѵ�.
//	//decltype(f4) f5;									// ����Ʈ �����ڸ� �θ��� ������ error 
//	decltype(f4) f6 = f4;								// ���� �����ڸ� �θ��� ������ ok
//	decltype(f4) f6 = move(f4);							// ok
//														// �ڼ��Ѱ� cppreference.com �� �����Ǿ� �־�.
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