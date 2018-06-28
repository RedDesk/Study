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
//// decltype 컴파일 타임 
//template<typename T> char check(decltype(T().resize(0))* a);	// 치환 성공 void 타입이 오면 error이니 포인터 타입으로 함
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
//	cout << has_resize<Test>::value << endl;				// 0 내부에 resize함수가 있지만 check 함수에서 디폴트 생성자를 부르기 때문에 치환에 실패한다.
//	cout << has_resize<array<int, 10>>::value << endl;		// 0
//}