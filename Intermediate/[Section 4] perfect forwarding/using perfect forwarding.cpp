//#include < iostream>
//#include < vector>
//#include <memory>
//using namespace std;
//
//class Point
//{
//	int x, y;
//public:
//	Point(int a, int b)
//	{
//		cout << "Point()" << endl;
//	}
//	~Point()
//	{
//		cout << "~Point()" << endl;
//	}
//	Point(const Point&)
//	{
//		cout << "Point(const Point&)" << endl;
//	}
//};
//
//int main()
//{
//	vector<Point> v;
//
//	//Point p(1, 2);
//	//v.push_back(p);
//
//	// perfect forwarding���� �������.
//	v.emplace_back(1, 2);
//
//	// �޸𸮰� Point�� ������ü�� ������ �����ȴ�.
//	// ���� ����Ұ�� ����ȭ ������ ����� �ִ�.
//	// shared_ptr<Point> sp(new Point(1, 2));
//	// perfect forwarding���� �������.
//	shared_ptr<Point> sp = make_shared<Point>(1, 2);
//}