//#include <iostream>
//using namespace std;
//
//// Policy Base Design
//// 1. 클래스가 사용하는 정책을 템플릿 인자를 통해서 교체 할 수 있게 만드는 디자인.
//// 2. 성능 저하 없이 정책을 교체 할 수 있다.
//// 3. 지켜야 하는 규칙이 있다.
//// - 규칙을 표현하는 코딩 방식은 없다. 문서화 해야 한다. (lock unlock을 만들어라)
//// - 템플릿 기반 라이브러리, 특히 STL 에서 널리 사용되는 디자인 기법.
//
//// lock과 unlock을 사용자가 정책을 바꿀수 있도록 디자인 해보자.
//
//template<typename T, typename ThreadModel = NoLock> class List
//{
//	ThreadModel tm;
//public:
//	void push_front(const T& a)
//	{
//		tm.lock();
//		//........
//		tm.unlock();
//	}
//};
//
//class NoLock
//{
//public:
//	inline void lock() {}
//	inline void unlock() {}
//};
//
//class MutexLock
//{
//public:
//	inline void lock() {}
//	inline void unlock() {}
//};
//
//List<int, NoLock> s;	// 전역변수, 멀티스레드에 안전하지 않다.
//
//int main()
//{
//	s.push_front(10);
//}