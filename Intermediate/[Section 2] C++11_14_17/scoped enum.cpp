#include <iostream>
#include <type_traits>

using namespace std;


// C++ 98/03 type은 int type
//enum Color { red = 1, green = 2 };

// C++ 11/14
enum class Color : char { red = 1, green = 2 };


int main()
{
	//int n1 = Color::red;

// 좋지 못하다.
//int n2 = red;			// unscoped enum
//int red = 10;

//cout << red << endl;


// scoped enum
//int n1 = red; // error
//int n2 = Color::red; //error

	Color c1 = Color::red;
	int n3 = static_cast<int>(Color::red);

	cout << typeid(underlying_type<Color>::type).name() << endl;
}