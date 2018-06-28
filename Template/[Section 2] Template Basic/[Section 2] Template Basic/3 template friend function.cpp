//#include <iostream>
//
//using namespace std;
//
//// 클래스 템플릿.
//template<typename T>
//class Point
//{
//	T x, y;
//public:
//	Point(T a = {}, T b = {}) : x(a), y(b) {}
//	// 함수 템플릿이 아니다.
//	// 해결하려면 함수 템플릿으로 만들자.
//	//friend ostream& operator<<(ostream& os, const Point<T>& p);
//
//	// 1. 첫번째 방법. 외부에 구현부를 둔다. N:N 관계.
//	//template<typename U>
//	//friend ostream& operator<<(ostream& os, const Point<U>& p);
//
//	// 2. 두번째 방법. 내부에 구현부 까지. 1:1 관계.
//	friend ostream& operator<<(ostream& os, const Point<T>& p)
//	{
//		return os << p.x << ", " << p.y;
//	}
//};
//
//// 함수 템플릿.
////template<typename T>
////ostream& operator<<(ostream& os, const Point<T>& p)
////{
////	return os << p.x << ", " << p.y;
////}
//
//int main()
//{
//	// 클래스 템플릿을 만들면 내부는 int로 만들어 진다.
//	Point<int> p(1, 2);
//	// 외부 << 함수 템플릿은 모든타입 T.
//	// 정확한 타입을 찾으려 하기 때문에 내부 friend 함수를 쓰려고 시도하나 선언부만 있어서 link에러가 난다.
//	cout << p << endl;
//}