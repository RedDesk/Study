#include <iostream>
using namespace std;

int main()
{
	int x[5] = { 1,2,3,4,5 };

	for (int n : x)
	{
		cout << n << endl;
	}

	for (auto p = begin(x); p != end(x); ++p)
	{
		int n = *p;
		cout << n << endl;
	}
}