//#include <iostream>
//using namespace std;
//
//template<typename ... Types >
//class mi : public Types...		// public lambda1, public lambda2
//{
//public:
//	mi(Types&& ... args) : Types(args)... {}		// ���ٴ� �⺻ �����ڰ� ���� �Ǿ��ֱ� ������ ���� �����ڸ� �θ��� �ְ� �ؾ��Ѵ�.
//
//	// ��� Ŭ������ Ư���Լ��� ����Ҽ� �ְ��ؾ��Ѵ�.
//	using Types::operator()...;
//};
//
//int main()
//{
//	//auto f = [](int a, int b) { return a + b; }
//
//	//// ���� ���� ���� �ٸ������� ����� ����! 
//	//f(1, 2);
//	//f(1, 2, 3);
//	//f(1, 2, 3, 4);
//
//	// c++ 17 ���ʹ� Ÿ���� ���� �ʾƵ� �߷��� �Ѵ�.
//	mi f([](int a, int b) {return a + b; },			// class lambda1{}; lambda1();
//		[](int a, int b, int c) {return a + b + c; });		// class lambda2{}; lambda2();
//
//	cout << f(1, 2) << endl;
//	cout << f(1, 2, 3) << endl;
//}
