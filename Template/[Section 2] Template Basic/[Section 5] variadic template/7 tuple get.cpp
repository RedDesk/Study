//#include <iostream>
//#include <tuple>
//using namespace std;
//
//
//// 튜플은 ...
//// 1. 서로 다른 타입의 객체를 N개 보관하는 템플릿.
//// 2. 요소에 접근할때 get을 이용
//// 3. C++11
//
//// 튜플을 구현해 보자.
//// 1. 가변 인자 템플릿을 사용해서 primary template을 만든다.
//// 2. 1개의 요소를 보관할 수 있도록 부분 특수화를 사용한다.
//// 3. 상속을 사용해서 N개를 보관할 수 있게 만든다.
//// 4. 생성자 등 필요한 멤버를 구현한다.
//
//// primary template
////--------------------------------------------------------------
//template<typename ... Types> struct xtuple
//{
//	static constexpr int N = 0;
//};
//
//// 부분 특수화
//template<typename T, typename ... Types>
//struct xtuple<T, Types...> : public xtuple<Types...>
//{
//	T value;
//
//	xtuple() = default;
//	xtuple(const T& v, const Types& ... args)
//		: value(v), xtuple<Types...>(args...) {}
//
//	static constexpr int N = xtuple<Types...>::N + 1;
//};
////--------------------------------------------------------------
//
//
//// tuple_element
//// 1. tuple이 가진N번째 요소의 타입을 구하는 템플릿.
//// 2. primary template을 만든다. -> 의도적으로 선언만 할수도 있다.
//
//// primary template
//template<size_t N, typename TP> struct xtuple_element;
////{
////	typedef TP type;
////};
//
//// 부분 특수화
//
//// 0번째를 구할수 있는 부분 특수화
//template<typename T, typename ... Types>
//struct xtuple_element<0, xtuple<T, Types...>>
//{
//	typedef T type;							// 0번째 요소의 타입.
//	typedef  xtuple<T, Types...> tupleType;	// 0번째 요소를 저장하는 타입
//};
//
//// N번째를 구할수 있는 부분 특수화
//template<size_t N, typename T, typename ... Types>
//struct xtuple_element<N, xtuple<T, Types...>>
//{
//	typedef typename xtuple_element<N - 1, xtuple<Types...>>::type		type;
//	typedef typename xtuple_element<N - 1, xtuple<Types...>>::tupleType tupleType;
//};
//
//
//// tuple의 요소에 접근하는 get만들기
//// 1. tuple이 0번째 요소는 자기 자신이 보관한다.
//// 2. tuple의 N번째 요소는 N번째 기반 클래스가 저장한다.
//template<size_t N, typename TP>
//typename xtuple_element<N, TP>::type& xget(TP& tp)
//{
//	return static_cast<typename xtuple_element<N, TP>::tupleType&>(tp).value;
//}
//
//
//int main()
//{
//	//tuple<> t0;
//	//tuple<int> t1(1);
//	//tuple<int, double, int, char> t4(1, 3.4, 2, 'A');
//	//
//	//get<2>(t4) = 10;
//	//cout << get<2>(t4) << endl;
//
//	xtuple<int, double, char> t3(1, 3.4, 'A');
//
//	//cout << t3.value << endl;
//
//	//cout << static_cast<xtuple<double, char>&>(t3).value << endl;
//	//cout << static_cast<xtuple<char>&>(t3).value << endl;
//
//	//xtuple_element<2, xtuple<int, double, char>>::type n;		// char
//	//xtuple_element<2, xtuple<int, double, char>>::tupleType T;	// tuple<char>
//	//cout << typeid(n).name() << endl;	
//
//	xget<1>(t3) = 1.1;
//
//	cout << xget<1>(t3) << endl;
//}