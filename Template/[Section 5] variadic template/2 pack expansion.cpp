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

									// ��Ȯ�� �ǹ̴� 
									// Parameter Pack�� ����ϴ� ���� -> ����(e1),����(e2),����(e3)
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

	// !!!!! pack expansion�� �Լ� ȣ���� ���� �Ǵ� list �ʱ�ȭ�� ����� ǥ���� ������ ����Ҽ� �ִ�.
	//print(args);		// error
	//print(args...);		// error
	//print(args)...;		// error 

	//int x[] = { 0, print(args)... };						// ���ڰ� ���� ��� {} ���ڰ� ��� ������ �߻��� 0, �ϳ� ������...

	//int x[] = { 0, (print(args),0)... };					// print �Լ��� return ���� ���� ���.

	//initializer_list<int> e = { (print(args),0)... };		// initializer_list ���
//}


//int main()
//{
//	//foo(1, 2, 3);
//	foo();
//}