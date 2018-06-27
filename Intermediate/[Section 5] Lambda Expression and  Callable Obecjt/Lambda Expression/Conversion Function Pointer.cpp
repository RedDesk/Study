//#include <iostream>
//
//int main()
//{
//	// 람다 표현식이 함수 포인터로 변환된다는 것은 내부에 변호나 함수가 존재한다는 것이다.
//	// static 함수로 만들어져 있어야 한다.
//	int(*f)(int, int) = [](int a, int b)
//	{
//		return a + b;
//	};
//
//
//	// 캡쳐를 안쓰는 경우에만 함수포인터로 변환이 가능하다.
//	/*
//	int v = 0;
//	int(*f1)(int, int) = [v](int a, int b)	// 스태틱 함수 안에서는 멤버를 접근해서 사용이 불가하다. error
//	{
//		return a + b;
//	};
//	*/
//}
//
//
//// 위의 람다식이 내부적으론 이렇게 만들어 진다. 
//class ClosureType
//{
//	int v;	// 캡쳐를 사용하면... 
//public:
//	int operator()(int a, int b) const
//	{
//		return  a + b;
//	}
//	// 함수포인터로의 변환은 멤버를 넘길수 없어서 static 함수를 컴파일러가 더 만든다.
//	static int method(int a, int b)
//	{
//		return a + b;//+v; ??? static에서는 이렇게 사용이 불가하다.
//	}
//
//	typedef int(*F)(int, int);
//
//	operator F()
//	{
//		return &ClosureType::method;
//	}
//};