//#include <iostream>
//using namespace std;
//
//template<typename T>
//struct xis_array
//{
//	static constexpr bool value = false;
//	static constexpr int size = -1;
//};
//
//template<typename T, size_t N>
//struct xis_array<T[N]>	// ������ Ÿ��T�� ���� N���� �迭 ���.
//{
//	static constexpr bool value = true;
//	static constexpr int size = N;
//};
//
//// unknown size array
////template<typename T>
////struct xis_array<T[]>	// ������ Ÿ��T�� ���� N���� �迭 ���.
////{
////	static constexpr bool value = true;
////};
//
//// �Լ� ���ø��� ���鶧 T�� Ÿ���� ������ ������ �迭�� �����ϸ� 
//// T Ÿ���� �迭�� �ƴ� �ƴ� �����ͷ� �����ȴ�.
//template<typename T> void foo(T& a)
//{
//	//if (xis_array<int[]>::value) // unkown size array
//	if (xis_array<T>::value)
//		cout << "is array, array size : " << xis_array<T>::size << endl;
//	else
//		cout << "not array" << endl;
//}
//
//int main()
//{
//	int x[3] = { 1,2,3 };
//	foo(x);
//
//	int b = 0;
//	foo(b);
//}