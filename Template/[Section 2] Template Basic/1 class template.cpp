//#include <iostream>
//
//template<typename T> class Complex
//{
//	T re, im;
//public:
//
//	Complex(T a = {}, T b = {}) : re(a), im(b) {}		// 디폴트 값 표기
//														// T a = T() C++98/03
//														// T a = {} C++11
//	T getReal() const;
//
//	static int cnt;
//
//	template<typename U> T func(const U& c);
//	//void foo(Complex c)		// 멤버 함수 안에서는 Complex<T> c 로 해석한다.
//	//{
//	//	Complex c2;			// Complex<T> c2로 해석함.
//	//}
//};
//
//// 외부에 멤버 함수 구현할때는 이런식으로.
//template<typename T>
//T Complex<T>::getReal() const
//{
//	return re;
//}
//
//// static member data의 외부 선언
//template<typename T>
//int Complex<T>::cnt = 0;
//
//// 클래스 템플릿의 멤버함수 템플릿 외부 선언
//template<typename T> template<typename U>
//T Complex<T>::func(const U& c)
//{
//
//}
//
//
///*
//void foo(Complex c)	// error
//{
//}
//*/
//
//int main()
//{
//	//Complex c1;				// error
//	Complex<int> c2;
//}