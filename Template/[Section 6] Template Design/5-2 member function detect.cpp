//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct Test
//{
//public:
//	void resize(int n) {}
//	Test(int a) {}
//};
//
//// decltype ������ Ÿ�� 
//template<typename T> char check(decltype(T().resize(0))* a);	// ġȯ ���� void Ÿ���� ���� error�̴� ������ Ÿ������ ��
//template<typename T> short check(...);
//
//template<typename T> struct has_resize
//{
//	static constexpr bool value = (sizeof(check<T>(0)) == 1);
//};
//
//int main()
//{
//	//cout << has_resize<vector<int>>::value << endl;		// 1
//	cout << has_resize<Test>::value << endl;				// 0 ���ο� resize�Լ��� ������ check �Լ����� ����Ʈ �����ڸ� �θ��� ������ ġȯ�� �����Ѵ�.
//	cout << has_resize<array<int, 10>>::value << endl;		// 0
//}