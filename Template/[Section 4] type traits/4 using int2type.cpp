//#include <iostream>
//using namespace std;
//
//template<int N> struct int2type
//{
//	static constexpr int value = N;
//};
//
//template<typename T> struct xis_pointer
//{
//	static constexpr bool value = false;
//	friend ostream& operator<<(ostream& os, const xis_pointer<T>& p) { return os << "not pointer"; }
//};
//
//// 핵심 : 포인터 타입에 대한 부분 특수화
//template<typename T> struct xis_pointer<T*>
//{
//	static constexpr bool value = true;
//	friend ostream& operator<<(ostream& os, const xis_pointer<T*>& p) { return os << "T*"; }
//};
//
////template<typename T> void printv_pointer(T* v)
////{
////	cout << v << " : " << *v << endl;
////}
////
////template<typename T> void printv_not_pointer(T v)
////{
////	cout << v << endl;
////}
//
//template<typename T> void printv_imp(T v, int2type<1>)
//{
//	cout << v << " : " << *v << endl;
//}
//
//template<typename T> void printv_imp(T v, int2type<0>)
//{
//	cout << v << endl;
//}
//
//
//template<typename T> void printv(T v)
//{
//	//if (xis_pointer<T>::value)		if(false)	// if는 런타임 구문이기 때문에  컴파일시 false로 나와도 그 밑을 컴파일 해본다... 
//	//if constexpr (xis_pointer<T>::value)			// C++ 17 문법으로 해결.
//	//if (xis_pointer<T>::value)
//	//	printv_pointer(v);							// 사용되지 않는 템플릿은 인스턴화가 안될줄 알았으나 어차피 if가 런타임 구문이라 컴파일 시도한다.
//	//else
//	//	printv_not_pointer(v);						// 결국 if를 사용해서는 해결할수가 없다.
//
//	// 해결책!!!
//	// 동일한 이름을 가지는 함수가 여러개 있을떼, 어느 함수를 호출할지 결정하는 것은 컴파일 시간에 이루어 진다.
//	// 선택되지 않은 함수가 템플릿이었다면 인스턴스화 되지 않았을 것이다.
//
//	// 함수 템플릿을 이용한다.
//	printv_imp(v, int2type<xis_pointer<T>::value>());			// true, false 둘다 0 , 1 이다. 그래서 int2type을 이용해서 타입을 다르게 만든다!!!!
//																// C++11에서 이 기술은 integral_constant라고 부르고 적용시켰다.
//}
//
//int main()
//{
//	int n = 3;
//	printv(n); // error??
//	printv(&n);
//}