//#include <iostream>
//
//template<typename T> class Complex
//{
//	T re, im;
//public:
//
//	Complex(T a = {}, T b = {}) : re(a), im(b) {}		// ����Ʈ �� ǥ��
//														// T a = T() C++98/03
//														// T a = {} C++11
//	T getReal() const;
//
//	static int cnt;
//
//	template<typename U> T func(const U& c);
//	//void foo(Complex c)		// ��� �Լ� �ȿ����� Complex<T> c �� �ؼ��Ѵ�.
//	//{
//	//	Complex c2;			// Complex<T> c2�� �ؼ���.
//	//}
//};
//
//// �ܺο� ��� �Լ� �����Ҷ��� �̷�������.
//template<typename T>
//T Complex<T>::getReal() const
//{
//	return re;
//}
//
//// static member data�� �ܺ� ����
//template<typename T>
//int Complex<T>::cnt = 0;
//
//// Ŭ���� ���ø��� ����Լ� ���ø� �ܺ� ����
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