//#include <iostream>
//using namespace std;
//
//
//void goo(int& a) { cout << "goo" << endl; }
//void hoo(int && a) { cout << "hoo" << endl; }
//
//// �Լ� ���� : lvalue�� �޾Ƽ�
//// ���� ���� : T�� ���� lvalue�Ǵ� rvalue�� ĳ����.
//// forward�� lvalue�� �ް� �ȴ�. forward reference�� �� �ʿ� ����.
//template<typename T> T&& xforward(T& arg)
//{
//	return static_cast<T&&>(arg);
//}
//
//template<typename F, typename T>
//void chronometry(F f, T&& arg)
//{
//	//����!!
//	// �̷��� �ϸ� �����Ϸ��� arg�� Ÿ���߷��� �ϱ� ������
//	//f(xforward(arg));
//	f(xforward<T>(arg));
//}
//
//// forward :
//// lvalue�� ���ڷ� �޾Ƽ� T�� Ÿ�Կ� ���� lvalue �Ǵ� rvalue�� ĳ���� �Ѵ�.
//int main()
//{
//	int n = 0;
//	chronometry(&goo, n);
//	chronometry(&hoo, 1);
//	cout << n << endl;
//}
//
//
//// move�� forward�� ������.
//// static_cast<T&&>(arg) : T�� Ÿ�Կ� ���� rvalue �Ǵ� lvalue ĳ����.
//
//
//// �Լ� ���� : lvalue�� rvalue�� ��� �޴´�
//// ���� ���� : rvalue�� ĳ����. (remove_reference�� �Լ� ������ ���۷����� ��� �����ѵ� ĳ�����Ѵ�)
//template<typename T>
//typename remove_reference<T>::type&&
//xmove(T&& obj)
//{
//	return static_cast<typename remove_reference<T>::type&&>(obj);
//}