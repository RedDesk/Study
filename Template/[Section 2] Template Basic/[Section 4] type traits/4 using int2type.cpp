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
//// �ٽ� : ������ Ÿ�Կ� ���� �κ� Ư��ȭ
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
//	//if (xis_pointer<T>::value)		if(false)	// if�� ��Ÿ�� �����̱� ������  �����Ͻ� false�� ���͵� �� ���� ������ �غ���... 
//	//if constexpr (xis_pointer<T>::value)			// C++ 17 �������� �ذ�.
//	//if (xis_pointer<T>::value)
//	//	printv_pointer(v);							// ������ �ʴ� ���ø��� �ν���ȭ�� �ȵ��� �˾����� ������ if�� ��Ÿ�� �����̶� ������ �õ��Ѵ�.
//	//else
//	//	printv_not_pointer(v);						// �ᱹ if�� ����ؼ��� �ذ��Ҽ��� ����.
//
//	// �ذ�å!!!
//	// ������ �̸��� ������ �Լ��� ������ ������, ��� �Լ��� ȣ������ �����ϴ� ���� ������ �ð��� �̷�� ����.
//	// ���õ��� ���� �Լ��� ���ø��̾��ٸ� �ν��Ͻ�ȭ ���� �ʾ��� ���̴�.
//
//	// �Լ� ���ø��� �̿��Ѵ�.
//	printv_imp(v, int2type<xis_pointer<T>::value>());			// true, false �Ѵ� 0 , 1 �̴�. �׷��� int2type�� �̿��ؼ� Ÿ���� �ٸ��� �����!!!!
//																// C++11���� �� ����� integral_constant��� �θ��� ������״�.
//}
//
//int main()
//{
//	int n = 3;
//	printv(n); // error??
//	printv(&n);
//}