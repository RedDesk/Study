//#include <iostream>
//using namespace std;
//
//// typetraits ����
//// ������ �ð��� Ÿ�Կ� ���� ������ ��ų� ������ Ÿ���� ���� �� ����ϴ� ����(��Ÿ�Լ�)
//// <type_traits> ����� ������ C++11
//
//// �̰����� �����͸� ������.
//template<typename T> struct xis_pointer
//{
//	// �� enum�� ���°�? bool�� �ȵǳ�?
//	// ������ Ÿ�� ����� �ϱ� ���� bool�� ���� �ʴ´�.
//	//enum { value = false };	// ���� ǥ����
//	static constexpr bool value = false;	// ����� �̷��� ������ �Ѵ�!!!
//
//	friend ostream& operator<<(ostream& os, const xis_pointer<T>& p)
//	{
//		return os << "not pointer";
//	}
//};
//
//// �ٽ� : ������ Ÿ�Կ� ���� �κ� Ư��ȭ
//template<typename T> struct xis_pointer<T*>	// ���� �����͸� �ȴ�.
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