//#include <iostream>
//#include <type_traits>
//
//using namespace std;
//
//// c++ 14
//// using을 이용하기
////template<typename T>
////using remove_pointer_t = typename remove_pointer<T>::type;
//
//// 변형된 타입을 얻는 traits
//template<typename T> void foo(T a)
//{
//	// 포인터를 제거한 타입을 구하고 싶다.
//	// typename remove_pointer<T>::type n;
//
//	remove_pointer_t<T> n;
//
//	cout << typeid(n).name() << endl;
//}
//
//// c++ 17
//// variable template를 이용.
////template<typename T>
////inline constexpr bool is_pointer_v = is_pointer<T>::value;
//
//// 타입의 정보를 조사하는 traits
//template<typename T> void goo(T a)
//{
//	//bool b = is_pointer<T>::value;
//	bool b = is_pointer_v<T>;
//
//}
//
//
//
//// 배열 정보 조사하기.
//// 값으로 받을경우 T :  array => pointer : decay발생
//// T&로 받아야 한다.
//template<typename T> void hoo(T& a)
//{
//	if (is_array<T>::value)
//	{
//		cout << "array" << endl;
//
//		cout << extent_v<T, 0> << endl;
//		cout << extent_v<T, 1> << endl;
//	}
//}
//
//
//template<typename T, typename U> void joo(T a, U b)
//{
//	// 같은 타입인지 조사
//	/*bool ret = is_same< typename remove_cv<T>::type,
//						typename remove_cv<U>::type>::value;*/
//	
//	// array => pointer : decay
//	/*bool ret = is_same< typename decay<T>::type,
//						typename decay<U>::type>::value;*/
//
//	// T가 U의 Base Class 인지 조사.
//	/*bool ret = is_base_of<T, U>::value;*/
//
//	cout << ret << endl;
//}
//
//// 많은 traits가 존재한다 cppreference.com 에서 확인해볼것.
//
//class A{};
//class B : public A{};
//
//int main()
//{
//	int n = 0;
//
//	/*foo(&n);
//
//	goo(&n);
//
//	int x[3][2] = { 1,2,3,4,5,6 };
//	hoo(x);*/
//
//	//joo<int, const int>(0, 0);
//	//joo<int[3], int*>(0, 0);
//	
//}