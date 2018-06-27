///*
//// 연산자 재정의는 사용자 타입일 떄만 가능하다.
//// seudo code
//// 후위형 임시 객체 반환.
//int operator++(int& a, int)
//{
//	int temp = a;
//	a = a + 1;
//	return temp;
//}
//
//// 전위형 참조리턴.
//int& operator++(int& a)
//{
//	return a = a + 1;
//}
//*/
//
//int main()
//{
//	int n = 0;
//	n = 10;
//
//	//n++ = 20;	// error	// 임시객체를 반환하는 operator++(n,int) 후위형은 전위형이랑 구분하기 위에 int parameter를 쓰지 않지만 추가만 해놈.
//	++n = 20;	// ok		// 참조를 반환하는 operator++(n)
//	// ++(++n);  이게 가능하려면 참조를 리턴해야한다.
//
//	int a = 10;
//	int b = 0;
//	//a + b = 20;	// error.
//
//	int x[3] = { 1,2,3 };
//	x[0] = 5; // x.operator[](0) = 5; lvalue
//
//
//	// decltype	
//	int *p = &n;
//
//	// 표현식이 lvalue가 되면 참조 안되면 rvalue
//	decltype(n) n1;
//	decltype(p) d1;
//	decltype(*p) d2;		// int ? int& // *p = 20 이 가능해서 이건 int& 
//	decltype(x[0]) d3;		// int&
//	auto a1 = x[0];			// int auto는 참조를 삭제함.
//
//	decltype(++n) d4;		// int&
//	decltype(n++) d5;		// int
//}