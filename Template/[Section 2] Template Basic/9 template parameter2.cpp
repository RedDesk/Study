//// 3. template parameter
//
//template<typename T> class list {};
//
//template<typename T, template<typename> class C> class stack
//{
//	//C c;// error.. list c;
//	C<T> c;	// ok.. list<int> c;
//};
//
//// default parameter
//template<typename T = int, int N = 10> struct stack2
//{
//};
//
//int main()
//{
//	//list s1;		// error. list는 타입은 아니고 템플릿
//	list<int> s2;	// ok. list<int>는 타입.
//	stack<int, list> s3;	// ok
//
//	stack2<int, 10> s4;
//	stack2<int> s5;
//	stack2<> s6;		// 모든 인자를 디폴트로 사용.
//}