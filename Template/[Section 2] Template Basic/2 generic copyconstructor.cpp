//#include <iostream>
//
//template<typename T> class Complex
//{
//	T re, im;
//public:
//
//	Complex(T a = {}, T b = {}) : re(a), im(b) {}
//
//	// �Ϲ����� ���� ������.
//	// �ڽŰ� ������ Ÿ�� �� ���ڷ� ������ �ִ�.
//	// Complex(const Complex<T>& c) {	}
//
//	// �Ϲ�ȭ�� ���� ������.
//	// private�� ���� �����ϵ��� Complex�� friend�� 
//	// ���� ���¼ҽ� �� shared_ptr ���ε� �̷��� �Ϲ�ȭ�� ���� �����ڸ� �����ϰ� �ִ�.
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
//	Complex<int> c2 = c1;		// ok ���� ������
//
//	// Complex<double> c3 = c1;	// error �ٸ� Ÿ��. (��������ڴ� ���� Ÿ������ �ʱ�ȭ �� �� ���ȴ�)
//	// �̰� Error���� �ʵ��� �غ���.
//
//	Complex<double> c3 = c1;
//
//}