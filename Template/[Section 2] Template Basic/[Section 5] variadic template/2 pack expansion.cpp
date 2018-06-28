//#include <iostream>
//using namespace std;

//void goo(int a, int b, int c)
//{
//	cout << a << b << c << endl;
//}
//
//int hoo(int a) { return -a; }


//int print(int a)
//void print(int a)
//{
//	cout << a << ",";
	//return 0;
//}

//template<typename ... Types> void foo(Types ... args)
//{
	//int x[] = { args... };	// pack expansion
								// {1,2,3,}

									// 정확한 의미는 
									// Parameter Pack을 사용하는 패턴 -> 패턴(e1),패턴(e2),패턴(e3)
	//int x[] = { (++args)... };	// { ++e1, ++e2, ++e3 } {2, 3, 4}

	//int x[] = { hoo(args...) };	// hoo(1,2,3) error

	//int x[] = { hoo(args)... };	//	{ hoo(1), hoo(2), hoo(3) }

	//goo(args...);					// goo(1,2,3); ok
	//goo(hoo(args)...);				//  goo(hoo(1), hoo(2), hoo(3)) ok
	////goo(hoo(args...));				//  goo( hoo(1,2,3)) error

	//for (auto n : x )
	//{
	//	cout << n << endl;
	//}

	// !!!!! pack expansion은 함수 호출의 인자 또는 list 초기화를 사용한 표현식 에서만 사용할수 있다.
	//print(args);		// error
	//print(args...);		// error
	//print(args)...;		// error 

	//int x[] = { 0, print(args)... };						// 인자가 없을 경우 {} 인자가 없어서 에러가 발생함 0, 하나 적어줌...

	//int x[] = { 0, (print(args),0)... };					// print 함수가 return 값이 없을 경우.

	//initializer_list<int> e = { (print(args),0)... };		// initializer_list 사용
//}


//int main()
//{
//	//foo(1, 2, 3);
//	foo();
//}