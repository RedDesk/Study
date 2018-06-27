//void f1(int& a) {}			// int���� lvalue�� ���ڷ� ����.
//void f1(int&& a) {}			// int���� rvalue�� ���ڷ� ����.
//
//// ��� Ÿ���� lvalue�� ���� ����.
//// �Ű������� &�� �پ lvalue�� �ƴ϶� Ÿ���� ������ ���͵� &�� ������ �ְ� �ȴ�.
//template<typename T> void f3(T& a) {}
//
//// &&�� ������ rvalue�� �޴°��� �ƴϴ�.
//// lvalue�� �����ϸ� T�� lvalure reference�� ����.
//// rvalue�� �����ϸ� T�� �� Ÿ������ ����.
//template<typename T> void f4(T&& a) {}
//
//// �����ϸ�...
//// int& : int���� lvalue�� ���� ����.
//// int&& : int���� rvalue�� ���� ����.
//// T&	: ��� Ÿ���� lvalue ���� ����.
//// T&&	: ��� Ÿ���� lvalue�� rvalue ��� ���� ����.
////		  ������ "universal reference" => ����� "forwarding reference"
//
//
//// !!!!! ���� ���� !!!!!
//template<typename T> class Test
//{
//public:
//	void goo(T&& a) {}
//
//	template<typename U> void hoo(U&& a) {}	// �̰��� forwarding reference
//};
//
//int main()
//{
//	int n = 10;
//
//	// T�� Ÿ���� ����ڰ� ������ ���
//	f3<int >(n);				// f3(int & a ) => lvalue ���� ����.
//	f3<int& >(n);				// f3(int& &a)	=> f3(int& a) => lvalue ���� ����.
//	f3<int&& >(n);				// f3(int&& &a) => f3(int& a) => lvalue ���� ����.
//
//	// ����ڰ� TŸ���� �������� ���� ���.
//	//f3(10);		// error 
//	f3(n);		// T : int ok.
//
//	// T�� Ÿ���� ����ڰ� ������ ���
//	f4<int>(10);					// f4(int&& a)	=> rvalue�� ����.
//	f4<int&>(n);					// f4(int&& &a) => f4(int& a) => lvalue�� ����.
//	f4<int&& >(10);					// f4(int&& &&a)=> f4(int&& a) => rvalue�� ����.
//
//	// ����ڰ� TŸ���� �������� ���� ���.
//	f4(n);		// ok. �����Ϸ��� T�� int& �� ������.
//	f4(10);		// ok. �����Ϸ��� intȤ�� &&�� �����ؾ� �ϴµ�
//				// ǥ�ؿ��� ��Ÿ��(int)���� �����Ѵ�. f4(T &&) => f4(int && )
//
//	// ���ǻ���!!!!!!! ��ü �����ÿ� goo�Լ��� Ÿ���� ��������.
//	// ��Ÿ�ӿ� goo �Լ��� TŸ���� �����Ҽ� ����.
//	Test<int> t1;	// int&&
//	//t1.goo(n);	// error
//	t1.goo(10);		// ok
//
//	Test<int&> t2;	// int&
//	t2.goo(n);		// ok
//	//t2.goo(10);	// error
//
//	// hoo �Լ��� ��Ÿ�ӿ� TŸ���� ���氡���ϴ� forwarding reference �����̴�.
//	Test<int> t3;
//	t3.hoo(n);		// ok
//	t3.hoo(10);		// ok
//
//}