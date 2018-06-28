//#include <iostream>
//#include <tuple>
//using namespace std;
//
//
//// Ʃ���� ...
//// 1. ���� �ٸ� Ÿ���� ��ü�� N�� �����ϴ� ���ø�.
//// 2. ��ҿ� �����Ҷ� get�� �̿�
//// 3. C++11
//
//// Ʃ���� ������ ����.
//// 1. ���� ���� ���ø��� ����ؼ� primary template�� �����.
//// 2. 1���� ��Ҹ� ������ �� �ֵ��� �κ� Ư��ȭ�� ����Ѵ�.
//// 3. ����� ����ؼ� N���� ������ �� �ְ� �����.
//// 4. ������ �� �ʿ��� ����� �����Ѵ�.
//
//// primary template
////--------------------------------------------------------------
//template<typename ... Types> struct xtuple
//{
//	static constexpr int N = 0;
//};
//
//// �κ� Ư��ȭ
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
//// 1. tuple�� ����N��° ����� Ÿ���� ���ϴ� ���ø�.
//// 2. primary template�� �����. -> �ǵ������� ���� �Ҽ��� �ִ�.
//
//// primary template
//template<size_t N, typename TP> struct xtuple_element;
////{
////	typedef TP type;
////};
//
//// �κ� Ư��ȭ
//
//// 0��°�� ���Ҽ� �ִ� �κ� Ư��ȭ
//template<typename T, typename ... Types>
//struct xtuple_element<0, xtuple<T, Types...>>
//{
//	typedef T type;							// 0��° ����� Ÿ��.
//	typedef  xtuple<T, Types...> tupleType;	// 0��° ��Ҹ� �����ϴ� Ÿ��
//};
//
//// N��°�� ���Ҽ� �ִ� �κ� Ư��ȭ
//template<size_t N, typename T, typename ... Types>
//struct xtuple_element<N, xtuple<T, Types...>>
//{
//	typedef typename xtuple_element<N - 1, xtuple<Types...>>::type		type;
//	typedef typename xtuple_element<N - 1, xtuple<Types...>>::tupleType tupleType;
//};
//
//
//// tuple�� ��ҿ� �����ϴ� get�����
//// 1. tuple�� 0��° ��Ҵ� �ڱ� �ڽ��� �����Ѵ�.
//// 2. tuple�� N��° ��Ҵ� N��° ��� Ŭ������ �����Ѵ�.
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