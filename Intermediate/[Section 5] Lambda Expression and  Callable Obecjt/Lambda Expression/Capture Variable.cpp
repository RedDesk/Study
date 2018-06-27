#include <iostream>
#include <string>
using namespace std;

int g = 10;

class Test
{
	int data = 0;
public:
	void foo()
	{
		int v = 0;
		//auto f = [this]() { this->data = 10; };			// 멤버를 캡쳐 하는법...
		auto f = [this]() { data = 10; };				// 위와 동일.

		// 멤버 데이터를 복사본으로 캡쳐 - C++17
		//auto f = [*this]() mutable { data = 10; };

		f();
		cout << data << endl;
	}
};


int main()
{
	int v1 = 0, v2 = 0, v3 = 0;

	/*
	auto f1 = [](int a) { return a + g; };						// 전역 변수는 접근 가능.
	//auto f2 = [](int a) { return a + v1; };					// 지역 변수는 접근 블가.
	auto f3 = [v1](int a) { return a + v1; };					// 캡쳐를 이용하여 지역 변수는 접근 가능.
	auto f4 = [v1, v2](int a) { return a + v1 + v2; };			// 캡쳐를 이용하여 지역 변수는 접근 가능.
	//auto f5 = [v1](int a) { v1 = 10; return a + v1; };		// 캡쳐를 하더라도 변경은 불가!
	auto f6 = [v1](int a) mutable { v1 = 10; return a + v1; };	// mutable을 이용하면 지역 변수는 수정 가능.
	*/

	// capture by copy
	// 캡쳐를 사용하게 되면 내부적으로 캡쳐한 데이터를 멤버로 갖게된다.
	// operator()() 함수는 const이기 떄문에 값을 변경할수 없어서 
	// mutable lambda를 이용한다 대신에 이건 복사본이다.   

	// auto f1 = [v1, v2]() mutable { v1 = 10, v2 = 20; };

	// capture by reference
	// operator()() const 이여도 값을 바꿀수 있는것은 레퍼런스가 가르키고 있는곳을 바꾸기 때문이다.
	// 레퍼런스를 바꾸는게 아니기 때문에 가능하다. 그래서 mutable을 사용하지 않는다.

	/*
	auto f1 = [&v1, &v2]() { v1 = 10, v2 = 20; };

	f1();

	cout << v1 << endl;
	cout << v2 << endl;
	*/


	// capture by copy, capture by reference
	auto f1 = [v1]() {};
	auto f2 = [&v1]() {};
	auto f3 = [v1, &v2]() {};

	// default capture
	auto f4 = [=]() {};			// all local value capture by copy
	auto f5 = [&]() {};			// all local value capture by reference
	auto f6 = [=, &v1]() {};	// all local value capture by copy, but v1 reference
	auto f7 = [&, v1]() {};		// all local value capture by reference, but v1 copy
	//auto f8 = [=, v1]() {};	// error

	auto f9 = [x = v1, v2 = v2, v3]() {};
	auto f10 = [v1, y = v2, &r = v3]() {};

	string s = "hello";
	auto f11 = [s1 = move(s)]() {};
	f11();
	cout << s << endl;	// empty

	unique_ptr<int> p(new int);
	auto f12 = [p = move(p)](){};

	Test t;
	t.foo();
}

// 함수 안에서 쓰는법.
// 함수의 인자도 지역변수다.
void foo(int a, int b)
{
	auto f = [=]() { return a + b; };
	auto f2 = [a, b]() { return a + b; };
}

template<typename ... Types>
void goo(Types ... args)
{
	auto f = [=]() { auto t = make_tuple(args...); };
	auto f2 = [args...]() { auto = make_tuple(args...); };
}