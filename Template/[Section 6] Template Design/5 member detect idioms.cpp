//#include <iostream>
//#include <vector>
//using namespace std;
//
////// sizeof �� �Լ��� ���� ���� �Ǵ��Ѵ�. ��Ÿ�� ��ī������ �ƴϴ�.
////// �׷��� ���� �־ �۵��Ѵ�.
////char foo(int a) { return 0; }
////short foo(double d) { return 0; }
////
////
////int main()
////{
////	int n = 10;
////
////	cout << sizeof(n) << endl;
////	//cout << sizeof(foo) << endl;	// �Լ��� �ȵ�.
////	cout << sizeof(foo(3)) << endl;	// ����Ÿ���� ũ��. 1bytes
////	cout << sizeof(foo(3.3)) << endl;	// ����Ÿ���� ũ��. 2bytes
////}
//
//
//template<typename T> void foo(T a) {}
//template<typename T> void goo(typename T::value_type a) {}
//
//int main()
//{
//	vector<int> v(10, 3);
//
//	foo(v);
//	//goo(0);	// error
//	goo<vector<int>>(0);	// ok
//}