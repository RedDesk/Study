//#include <iostream>>
//
//using namespace std;
//
//// 실제 표준에서 remove_all_pointer는 없다.
//template<typename T> struct xremove_all_pointer
//{
//	typedef T type;
//};
//
//// 재귀를 사용한다.!! 템플릿에서 재귀는 많이 사용된다.
//// 재귀할수록 포인터가 하나씩 떨어져 나간다.
//// 포인터가 삭제 되면 primary를 사용한다.
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