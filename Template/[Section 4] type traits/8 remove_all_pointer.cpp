//#include <iostream>>
//
//using namespace std;
//
//// ���� ǥ�ؿ��� remove_all_pointer�� ����.
//template<typename T> struct xremove_all_pointer
//{
//	typedef T type;
//};
//
//// ��͸� ����Ѵ�.!! ���ø����� ��ʹ� ���� ���ȴ�.
//// ����Ҽ��� �����Ͱ� �ϳ��� ������ ������.
//// �����Ͱ� ���� �Ǹ� primary�� ����Ѵ�.
//template<typename T> struct xremove_all_pointer<T*>
//{
//	typedef typename xremove_all_pointer<T>::type type;
//};
//
//int main()
//{
//	xremove_all_pointer<int*****>::type n;
//
//	cout << typeid(n).name() << endl;
//}