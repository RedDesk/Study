#include <iostream>
using namespace std;

template<int N> struct check {};

// constexpr ÇÔ¼ö - C++11 
constexpr int add(int a, int b)
{
	return a + b;
}

int main()
{
	int n = add(1, 2);

	check<add(1, 2) > c;	// ok!!

	int n1 = 1, n2 = 2;
	int n3 = add(n1, n2);	// ok!!

	check<add(n1, n2)> c2;	// error!!
}