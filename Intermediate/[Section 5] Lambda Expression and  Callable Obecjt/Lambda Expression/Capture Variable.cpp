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
		//auto f = [this]() { this->data = 10; };			// ����� ĸ�� �ϴ¹�...
		auto f = [this]() { data = 10; };				// ���� ����.

		// ��� �����͸� ���纻���� ĸ�� - C++17
		//auto f = [*this]() mutable { data = 10; };

		f();
		cout << data << endl;
	}
};


int main()
{
	int v1 = 0, v2 = 0, v3 = 0;

	/*
	auto f1 = [](int a) { return a + g; };						// ���� ������ ���� ����.
	//auto f2 = [](int a) { return a + v1; };					// ���� ������ ���� ��.
	auto f3 = [v1](int a) { return a + v1; };					// ĸ�ĸ� �̿��Ͽ� ���� ������ ���� ����.
	auto f4 = [v1, v2](int a) { return a + v1 + v2; };			// ĸ�ĸ� �̿��Ͽ� ���� ������ ���� ����.
	//auto f5 = [v1](int a) { v1 = 10; return a + v1; };		// ĸ�ĸ� �ϴ��� ������ �Ұ�!
	auto f6 = [v1](int a) mutable { v1 = 10; return a + v1; };	// mutable�� �̿��ϸ� ���� ������ ���� ����.
	*/

	// capture by copy
	// ĸ�ĸ� ����ϰ� �Ǹ� ���������� ĸ���� �����͸� ����� ���Եȴ�.
	// operator()() �Լ��� const�̱� ������ ���� �����Ҽ� ��� 
	// mutable lambda�� �̿��Ѵ� ��ſ� �̰� ���纻�̴�.   

	// auto f1 = [v1, v2]() mutable { v1 = 10, v2 = 20; };

	// capture by reference
	// operator()() const �̿��� ���� �ٲܼ� �ִ°��� ���۷����� ����Ű�� �ִ°��� �ٲٱ� �����̴�.
	// ���۷����� �ٲٴ°� �ƴϱ� ������ �����ϴ�. �׷��� mutable�� ������� �ʴ´�.

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

// �Լ� �ȿ��� ���¹�.
// �Լ��� ���ڵ� ����������.
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