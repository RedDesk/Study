//#include <iostream>
////
////class Test
////{
////public :
////	enum { value1 = 1 };
////	static int value2;
////
////	typedef int INT;
////	using SHORT = short;		// C++11
////
////	class innerClass {};
////};
////
////int Test::value2 = 1;
////
////int main()
////{
////	int n1 = Test::value1;					// 클래스 이름:: 으로 접근 가능한 요소들 
////	int n2 = Test::value2;					// 값 : enum 상수, static 멤버 변수
////											// 타입 : typedef, using
////	Test::INT a;
////	Test::SHORT b;
////	Test::innerClass c;
////}
//
//
////int p = 0;
//
//class Test
//{
//public:
//	//enum { DWORD = 5};
//	typedef int DWORD;
//};
//
//template< typename T>
//typename T::DWORD foo(T t)
//{
//	// 어떻게 해석되나?
//	// T가 클래스일 경우 문제 되지 않는다.
//	//T::DWORD * p;		// 값 : 5 * p
//						//타입: 지역변수 포인터p를 선언
//
//	T::DWORD * p;  // 값으로 해석한다. 마이크로 소프트 컴파일은 앞에 typename을 생략한다. 그러나 리턴으로 지정할 경우는 에러가 난다.
////	typename T::DWORD * p; // 타입으로 해석한다. 템플릿일 경우만 쓴다 Test::DWORD* p는  error
//
//	return 0;
//}
//
//int main()
//{
//	Test t;
//	foo(t);
//}