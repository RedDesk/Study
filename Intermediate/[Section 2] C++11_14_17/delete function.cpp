//int square(int a)
//{
//	return a * a;
//}
//
////double square(double d); // ����
//double square(double d) = delete;
//
//
//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b) {}
//	Point(const Point&) = delete;
//
//	//private:
//	//	Point(const Point& p); // �������.
//};
//
//int main()
//{
//	square(3);
//	//square(3.3);	//error
//
//	Point p1(1, 1);
//	//Point p2 = p1; //error
//}