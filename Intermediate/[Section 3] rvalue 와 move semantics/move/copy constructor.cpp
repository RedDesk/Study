//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b) {}
//
//	// ���� ������. ( �� �̸�� �̾�� �ϴ°� )
//	Point(const Point& p)	// Point(Point p) ����� ��� Point p = p1 ���簡 ���縦 ȣ��(���ѷ���)
//	{						// ���� �������� ������ �Ҽ��� ����.
//							// Point(Point& p) �̷����  �ӽð�ü(rvalue)�� ������ ���� ������ 
//	}						// Point p3(foo()) �̷������� �ʱ�ȭ �Ҽ� ����.
//
//	/*template<typename T>
//	Point(T&& p)
//	{
//
//	}*/
//
//};
//
//Point foo()
//{
//	Point ret(0, 0);
//	return ret;
//}
//
//int main()
//{
//	Point p1(1, 1);		// ������ ȣ��.
//	Point p2(p1);		// ���� ������ ȣ��.
//
//	Point p3(foo());
//}