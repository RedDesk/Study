#include <iostream>
#include <map>
#include <string>

using namespace std;

//#define PI 3.14
//c++11 부터는 define보단 constexpr을 써라.
//constexpr double pi = 3.14;
//constexpr float pi = 3.14;

// c++ 14부터는 변수 템플릿이 존재한다.
template<typename T>
constexpr T pi = 3.14;

template<typename T> void foo(T a, T b)
{

}

int main()
{
	float f = 3.3f;
	foo(f, pi<float>);		// 둘의 타입이 다르다.
}