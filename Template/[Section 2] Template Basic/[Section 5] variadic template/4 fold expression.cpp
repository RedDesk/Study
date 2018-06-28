//#include <iostream>
//#include <vector>
//using namespace std;

// C++ 17 fold expression
// 4가지의 fold expression 방식이 있다. op -> operator
// unary right fold : (args op ... )		-> E1 op (E2 op (E3 op E4))
// unary left fold	: (... op args )		-> ((E1 op E2) op E3 ) op E4
// binary right fold: (args op ... op init)	-> E1 op (E2 op (E3 op (E4 op init)))
// binary left fold : (init op ... op args)	-> (((init op E1) op E2) op E3 ) op E4
//template<typename ... Types>
//int foo(Types ... args)
//{
//	int x[] = { args... };	// pack expansion
//
//	int n = (args + ...);			// 1 + (2 + (3 + 4))
//	int n = (... + args);			// ((1 + 2) + 3) + 4
//	int n = (args + ... + 10);		// 1 + (2 + (3 + (4 + 10)))
//	int n = (10 + args + ... );		// 1 + 2 + 3 + 4
//
//	return n;
//}
//
//
//int main()
//{
//	int n = foo(1, 2, 3, 4);
//	cout << n << endl;
//}


//vector<int> v;
//
//template<typename ... Types>
//void foo(Types ... args)
//{
//	(args, ...);
//}
//
//int main()
//{
//	foo(1, 2, 3);
//}
//
