#include <iostream>>
using namespace std;

// 리턴 타입에 따른 리턴 방법.
int x = 10;
int		f1() { return x; }
int&	f2() { return x; }
int&&	f3() { return move(x); }

struct Base
{
	virtual void foo()
	{
		cout << "B::foo" << endl;
	}
};
struct Derived : public Base
{
	virtual void foo() override
	{
		cout << "D::foo" << endl;
	}
};

Derived d;
Base	bf1() { return d; }
Base&	bf2() { return d; }
Base&&	bf3() { return move(d); }


int main()
{
	//f1() = 10; // error.
	f2() = 20; // ok.
	//f3() = 30; // error.

	Base b1 = bf1();	// 임시객체, move
	Base b2 = bf2();	// copy
	Base b3 = bf3();	// move

	bf1().foo();		// B:foo
	bf2().foo();		// D:foo
	bf3().foo();		// D:foo
}

// cppreference를 참고하면 자세히 나와있다.
//                glvalue                            rvalue
//   ________________|_______________   _______________|________________
//   |								|   |                              |
// lvalue							xvalue							prvalue	

// lvalue reference return			rvalue reference return			value return

// copy								move							move
// polymorphic						polymorphic						non-polymorphic
// has id							has id							no id
