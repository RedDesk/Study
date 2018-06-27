#include <iostream>
#include <functional>
using namespace std;

void foo(int& a) { a = 30; }

template<typename F, typename T>
void chronometry(F f, T& arg)
{
	f(arg);
}

int main()
{
	int n = 0;
	chronometry(&foo, n);

	function<void()> f;
	f = bind(&foo, n);
	f();
}