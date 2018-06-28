//#include <iostream>
//
//template<typename T> class Complex
//{
//	T re, im;
//public:
//
//	Complex(T a = {}, T b = {}) : re(a), im(b) {}
//
//	// 일반적인 복사 생성자.
//	// 자신과 동일한 타입 만 인자로 받을수 있다.
//	// Complex(const Complex<T>& c) {	}
//
//	// 일반화된 복사 생성자.
//	// private에 접근 가능하도록 Complex는 friend로 
//	// 많은 오픈소스 및 shared_ptr 내부도 이러한 일반화된 복사 생성자를 구현하고 있다.
//	template<typename U>
//	Complex(const Complex<U>& c);
//	template<typename> friend class Complex;
//};
//
//template<typename T> template<typename U>
//Complex<T>::Complex(const Complex<U>& c)
//	: re(c.re), im(c.im)
//{
//
//}
//
//
//int main()
//{
//	Complex<int> c1(1, 1);		// ok
//	Complex<int> c2 = c1;		// ok 복사 생성자
//
//	// Complex<double> c3 = c1;	// error 다른 타입. (복사생성자는 같은 타입으로 초기화 될 때 사용된다)
//	// 이걸 Error나지 않도록 해보자.
//
//	Complex<double> c3 = c1;
//
//}