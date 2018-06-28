////typedef int DWORD;
////typedef void(*F)(int);
//
////using DWORD = int;
////using F = void(*)(int);
//
//
//template<typename T, typename U> struct Pair
//{
//	T b1;
//	U v2;
//};
//
//// typedef Pair Point;	// error 타입에 대한 별명만 가능함 template은 타입이 아님.
//
//// using은 template 별명도 가능하다.
//// 여러가지 방법으로 사용이 가능하다.
//template<typename T, typename U>
//using Point = Pair<T, U>;
//
//template<typename T>
//using Point2 = Pair<T, T>;
//
//template<typename T>
//using Point3 = Pair<T, short>;
//
//
//int main()
//{
//	//DWORD n;
//	//F f;
//
//	Point<int, double> p;
//	Point2<int> p2;			// Point<int,int>
//	Point3<int> p3;			// Point<int,short>
//}