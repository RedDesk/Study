#include <iostream>
#include <map>
#include <string>

using namespace std;

//#define PI 3.14
//c++11 ���ʹ� define���� constexpr�� ���.
//constexpr double pi = 3.14;
//constexpr float pi = 3.14;

// c++ 14���ʹ� ���� ���ø��� �����Ѵ�.
template<typename T>
constexpr T pi = 3.14;

template<typename T> void foo(T a, T b)
{

}

int main()
{
	float f = 3.3f;
	foo(f, pi<float>);		// ���� Ÿ���� �ٸ���.
}