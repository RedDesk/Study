//#include <iostream>
//#include <tuple>
//using namespace std;
//
//// parameter pack에서 각 요소를 꺼내는 방법
//// 1. Pack Expansion : 배열또는 tuple에 담는다.
//// 2. 재귀 호출과 유사한 호출식을 사용한다.
//
//template<typename ... Types> void foo(Types ... args)
//{
//	//int x[] = { args ... };
//	tuple<Types...> tp(args...);
//
//	cout << get<0>(tp) << endl;
//	cout << get<1>(tp) << endl;
//	cout << get<2>(tp) << endl;
//}
//
//
//void foo2() {}
//
//// 이 방식은 재귀처럼 보이지만 foo2라는 함수가 여러개 만들어 질뿐...
//template<typename T, typename ... Types>
//void foo2(T value, Types ... args)
//{
//	static int n = 0;		// 별도의 함수라는 증거...
//	++n;
//
//	cout << n << " : " << value << endl;
//
//	foo2(args...);		// foo(3.4,"AAA") -> foo( "AA") -> foo() 인자가 없는 foo함수가 필요함.
//}
//
//
//
//int main()
//{
//	//foo(1, 3.4, "AAA");
//	foo2(1, 3.4, "AAA");
//}