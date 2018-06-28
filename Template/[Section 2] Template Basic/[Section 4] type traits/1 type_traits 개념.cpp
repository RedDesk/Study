//#include <iostream>
//using namespace std;
//
//// typetraits 개념
//// 컴파일 시간에 타입에 대한 정보를 얻거나 변형된 타입을 얻을 떄 사용하는 도구(메타함수)
//// <type_traits> 헤더로 제공됨 C++11
//
//// 이것으로 포인터를 조사함.
//template<typename T> struct xis_pointer
//{
//	// 왜 enum을 쓰는가? bool은 안되나?
//	// 컴파일 타임 상수로 하기 위해 bool은 되지 않는다.
//	//enum { value = false };	// 예전 표현식
//	static constexpr bool value = false;	// 요새는 이렇게 쓰도록 한다!!!
//
//	friend ostream& operator<<(ostream& os, const xis_pointer<T>& p)
//	{
//		return os << "not pointer";
//	}
//};
//
//// 핵심 : 포인터 타입에 대한 부분 특수화
//template<typename T> struct xis_pointer<T*>	// 비상수 포인터만 된다.
//{
//	static constexpr bool value = true;
//	friend ostream& operator<<(ostream& os, const xis_pointer<T*>& p)
//	{
//		return os << "T*";
//	}
//};
//
//// const ver
//template<typename T> struct xis_pointer<T* const>
//{
//	static constexpr bool value = true;
//	friend ostream& operator<<(ostream& os, const xis_pointer<T* const>& p)
//	{
//		return os << "T* const";
//	}
//};
//
//// volatile ver
//template<typename T> struct xis_pointer<T* volatile>
//{
//	static constexpr bool value = true;
//	friend ostream& operator<<(ostream& os, const xis_pointer<T* volatile>& p)
//	{
//		return os << "T* volatile";
//	}
//};
//
//// const volatile ver
//template<typename T> struct xis_pointer<T* const volatile>
//{
//	static constexpr bool value = true;
//	friend ostream& operator<<(ostream& os, const xis_pointer<T* const volatile>& p)
//	{
//		return os << "T* const volatile";
//	}
//};
//
//
//int main()
//{
//	cout << xis_pointer<int>() << endl;
//	cout << xis_pointer<int*>() << endl;
//	cout << xis_pointer<int* const>() << endl;
//	cout << xis_pointer<int* volatile>() << endl;
//	cout << xis_pointer<int* const volatile>() << endl;
//	cout << xis_pointer<int* volatile const>() << endl;
//}