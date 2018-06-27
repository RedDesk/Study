//#include <iostream>
//using namespace std;
//
//template<typename ... Types >
//class mi : public Types...		// public lambda1, public lambda2
//{
//public:
//	mi(Types&& ... args) : Types(args)... {}		// 람다는 기본 생성자가 삭제 되어있기 때문에 복사 생성자를 부를수 있게 해야한다.
//
//	// 기반 클래스의 특정함수를 사용할수 있게해야한다.
//	using Types::operator()...;
//};
//
//int main()
//{
//	//auto f = [](int a, int b) { return a + b; }
//
//	//// 가변 인자 말고 다른식으로 만들어 보자! 
//	//f(1, 2);
//	//f(1, 2, 3);
//	//f(1, 2, 3, 4);
//
//	// c++ 17 부터는 타입을 주지 않아도 추론을 한다.
//	mi f([](int a, int b) {return a + b; },			// class lambda1{}; lambda1();
//		[](int a, int b, int c) {return a + b + c; });		// class lambda2{}; lambda2();
//
//	cout << f(1, 2) << endl;
//	cout << f(1, 2, 3) << endl;
//}
