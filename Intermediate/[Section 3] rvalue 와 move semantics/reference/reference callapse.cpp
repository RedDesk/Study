//using LREF = int&;
//using RREF = int&&;
//
//// 템플릿 typedef 때 reference collapse가 발생함.
//// 사용자가 타이핑 했을경우는 컴파일 에러 발생.
//template<typename T> void foo(T& a ) {}
//
//int main()
//{
//	int n = 10;
//
//	// so easy!!
//	LREF r1 = n;
//	RREF r2 = 10;
//
//
//	// reference collapse 규칙
//	// &	&	&
//	// &	&&	&
//	// &&	&	&
//	// &&	&&	&&  !!! 이경우만 rvalue...
//
//	// &가 겹칠경우 어떻게 처리할거냐 reference collapse
//	LREF& r3 = n;			// int& & r3 = ??
//	RREF& r4 = n;
//	LREF&& r5 = n;
//	RREF&& r6 = 10;
//
//
//	int& && r7; // 컴파일 에러...  사용자가 타이핑 했을때 에러가 발생.
//}