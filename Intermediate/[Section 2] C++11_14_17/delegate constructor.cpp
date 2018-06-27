#include <iostream>
using namespace std;
class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}
	Point() : Point(0, 0)	// 위임 생성자 C++ 11
	{
		//Point(0, 0);	// 컴파일 에러가 안난다. x, y 가 쓰레기 값으로 나온다 
						// 다른 생성자 호출이 아니고, Point의 임시객체를 만드는 표현..
	}
};

int main()
{
	Point p;
	cout << p.x << "," << p.y << endl;
}