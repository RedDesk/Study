//#include <iostream>
//using namespace std;
//
//// 템플릿 인자로 사용가능한 것.
//// 1. type
//// 2. value( non-type )
//// 3. template
//
//// type parameter
//template<typename T>
//class List
//{
//};
//
//// non-type parameter
//// 1. 정수형 상수(실수 안됨)
//template<int N> class Test1 {};
//
//// 2. enum 상수
//enum Color { red = 1, green = 2 };
//template<Color> class Test2 {};
//
//// 3. 포인터 (지역변수 주소안됨, 전역변수 주소 가능)
//// 정확히는 no linkage를 가지는 변수 주소는 안됨.
//template<int*> class Test3 {};
//int x = 0;
//
//// 4. 함수 포인터
//template<int(*)(void)> class Test4{};
//
//// 5. 멤버 함수 포인터
//// 6. auto C++17 가능...
//template<auto N> class Test6
//{
//public :
//	Test6()
//	{
//		cout << typeid(N).name() << endl;
//	}
//};
//
//int main()
//{
//	int n = 10;
//
//	Test1<10> t1;
//	//	Test1<n> t2;
//	Test2<red> t3;
//	//	Test3<&n> t4; // error
//	Test3<&x> t5;
//	Test4<&main> t6;
//
//	Test6<10> t7;	
//	Test6<&x> t9;
//	Test6<&main> t10;
//}