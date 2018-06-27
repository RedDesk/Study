//void f1(int& a) {}			// int형의 lvalue만 인자로 가능.
//void f1(int&& a) {}			// int형의 rvalue만 인자로 가능.
//
//// 모든 타입의 lvalue만 전달 가능.
//// 매개변수에 &가 붙어서 lvalue가 아니라 타입이 무엇이 들어와도 &만 받을수 있게 된다.
//template<typename T> void f3(T& a) {}
//
//// &&라서 무조건 rvalue만 받는것이 아니다.
//// lvalue를 전달하면 T는 lvalure reference로 결정.
//// rvalue를 전달하면 T는 값 타입으로 결정.
//template<typename T> void f4(T&& a) {}
//
//// 정리하면...
//// int& : int형의 lvalue만 전달 가능.
//// int&& : int형의 rvalue만 전달 가능.
//// T&	: 모든 타입의 lvalue 전달 가능.
//// T&&	: 모든 타입의 lvalue와 rvalue 모두 전달 가능.
////		  이전엔 "universal reference" => 현재는 "forwarding reference"
//
//
//// !!!!! 주의 사항 !!!!!
//template<typename T> class Test
//{
//public:
//	void goo(T&& a) {}
//
//	template<typename U> void hoo(U&& a) {}	// 이것이 forwarding reference
//};
//
//int main()
//{
//	int n = 10;
//
//	// T의 타입을 사용자가 지정할 경우
//	f3<int >(n);				// f3(int & a ) => lvalue 전달 가능.
//	f3<int& >(n);				// f3(int& &a)	=> f3(int& a) => lvalue 전달 가능.
//	f3<int&& >(n);				// f3(int&& &a) => f3(int& a) => lvalue 전달 가능.
//
//	// 사용자가 T타입을 지정하지 않은 경우.
//	//f3(10);		// error 
//	f3(n);		// T : int ok.
//
//	// T의 타입을 사용자가 지정할 경우
//	f4<int>(10);					// f4(int&& a)	=> rvalue를 전달.
//	f4<int&>(n);					// f4(int&& &a) => f4(int& a) => lvalue를 전달.
//	f4<int&& >(10);					// f4(int&& &&a)=> f4(int&& a) => rvalue를 전달.
//
//	// 사용자가 T타입을 지정하지 않은 경우.
//	f4(n);		// ok. 컴파일러가 T를 int& 로 결정함.
//	f4(10);		// ok. 컴파일러가 int혹은 &&로 결정해야 하는데
//				// 표준에서 값타입(int)으로 결정한다. f4(T &&) => f4(int && )
//
//	// 주의사항!!!!!!! 객체 생성시에 goo함수의 타입이 정해진다.
//	// 런타임에 goo 함수의 T타입을 변경할수 없다.
//	Test<int> t1;	// int&&
//	//t1.goo(n);	// error
//	t1.goo(10);		// ok
//
//	Test<int&> t2;	// int&
//	t2.goo(n);		// ok
//	//t2.goo(10);	// error
//
//	// hoo 함수는 런타임에 T타입이 변경가능하다 forwarding reference 형식이다.
//	Test<int> t3;
//	t3.hoo(n);		// ok
//	t3.hoo(10);		// ok
//
//}