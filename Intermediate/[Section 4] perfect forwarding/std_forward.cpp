//#include <iostream>
//using namespace std;
//
//
//void goo(int& a) { cout << "goo" << endl; }
//void hoo(int && a) { cout << "hoo" << endl; }
//
//// 함수 인자 : lvalue를 받아서
//// 리턴 인자 : T에 따라서 lvalue또는 rvalue로 캐스팅.
//// forward는 lvalue만 받게 된다. forward reference로 할 필요 없다.
//template<typename T> T&& xforward(T& arg)
//{
//	return static_cast<T&&>(arg);
//}
//
//template<typename F, typename T>
//void chronometry(F f, T&& arg)
//{
//	//주의!!
//	// 이렇게 하면 컴파일러가 arg로 타입추론을 하기 때문에
//	//f(xforward(arg));
//	f(xforward<T>(arg));
//}
//
//// forward :
//// lvalue를 인자로 받아서 T의 타입에 따라 lvalue 또는 rvalue로 캐스팅 한다.
//int main()
//{
//	int n = 0;
//	chronometry(&goo, n);
//	chronometry(&hoo, 1);
//	cout << n << endl;
//}
//
//
//// move와 forward의 차이점.
//// static_cast<T&&>(arg) : T의 타입에 따라 rvalue 또는 lvalue 캐스팅.
//
//
//// 함수 인자 : lvalue와 rvalue를 모두 받는다
//// 리턴 인자 : rvalue로 캐스팅. (remove_reference로 함수 인자의 레퍼런스를 모두 삭제한뒤 캐스팅한다)
//template<typename T>
//typename remove_reference<T>::type&&
//xmove(T&& obj)
//{
//	return static_cast<typename remove_reference<T>::type&&>(obj);
//}