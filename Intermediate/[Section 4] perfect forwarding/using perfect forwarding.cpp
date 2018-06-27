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
//	// perfect forwarding으로 만들어짐.
//	v.emplace_back(1, 2);
//
//	// 메모리가 Point와 관리객체가 떨어져 생성된다.
//	// 많이 사용할경우 파편화 문제가 생길수 있다.
//	// shared_ptr<Point> sp(new Point(1, 2));
//	// perfect forwarding으로 만들어짐.
//	shared_ptr<Point> sp = make_shared<Point>(1, 2);
//}