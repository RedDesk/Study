#include <iostream>
using namespace std;
class Point
{
public:
	int x, y;

	Point(int a, int b) : x(a), y(b) {}
	Point() : Point(0, 0)	// ���� ������ C++ 11
	{
		//Point(0, 0);	// ������ ������ �ȳ���. x, y �� ������ ������ ���´� 
						// �ٸ� ������ ȣ���� �ƴϰ�, Point�� �ӽð�ü�� ����� ǥ��..
	}
};

int main()
{
	Point p;
	cout << p.x << "," << p.y << endl;
}