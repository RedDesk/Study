//#include <iostream>
//
//using namespace std;
//
//// Ŭ���� ���ø�.
//template<typename T>
//class Point
//{
//	T x, y;
//public:
//	Point(T a = {}, T b = {}) : x(a), y(b) {}
//	// �Լ� ���ø��� �ƴϴ�.
//	// �ذ��Ϸ��� �Լ� ���ø����� ������.
//	//friend ostream& operator<<(ostream& os, const Point<T>& p);
//
//	// 1. ù��° ���. �ܺο� �����θ� �д�. N:N ����.
//	//template<typename U>
//	//friend ostream& operator<<(ostream& os, const Point<U>& p);
//
//	// 2. �ι�° ���. ���ο� ������ ����. 1:1 ����.
//	friend ostream& operator<<(ostream& os, const Point<T>& p)
//	{
//		return os << p.x << ", " << p.y;
//	}
//};
//
//// �Լ� ���ø�.
////template<typename T>
////ostream& operator<<(ostream& os, const Point<T>& p)
////{
////	return os << p.x << ", " << p.y;
////}
//
//int main()
//{
//	// Ŭ���� ���ø��� ����� ���δ� int�� ����� ����.
//	Point<int> p(1, 2);
//	// �ܺ� << �Լ� ���ø��� ���Ÿ�� T.
//	// ��Ȯ�� Ÿ���� ã���� �ϱ� ������ ���� friend �Լ��� ������ �õ��ϳ� ����θ� �־ link������ ����.
//	cout << p << endl;
//}