//class Point
//{
//	int x, y;
//public:
//	Point(int a = 0, int b = 0) : x(a), y(b) {}
//
//	// 복사 생성자. ( 왜 이모양 이어야 하는가 )
//	Point(const Point& p)	// Point(Point p) 모양일 경우 Point p = p1 복사가 복사를 호출(무한루프)
//	{						// 성능 문제보단 값으로 할수가 없다.
//							// Point(Point& p) 이럴경우  임시객체(rvalue)를 받을수 없기 때문에 
//	}						// Point p3(foo()) 이런식으로 초기화 할수 없다.
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
//	Point p1(1, 1);		// 생성자 호출.
//	Point p2(p1);		// 복사 생성자 호출.
//
//	Point p3(foo());
//}