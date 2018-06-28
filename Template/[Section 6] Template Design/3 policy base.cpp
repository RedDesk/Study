//#include <iostream>
//using namespace std;
//
//// Policy Base Design
//// 1. Ŭ������ ����ϴ� ��å�� ���ø� ���ڸ� ���ؼ� ��ü �� �� �ְ� ����� ������.
//// 2. ���� ���� ���� ��å�� ��ü �� �� �ִ�.
//// 3. ���Ѿ� �ϴ� ��Ģ�� �ִ�.
//// - ��Ģ�� ǥ���ϴ� �ڵ� ����� ����. ����ȭ �ؾ� �Ѵ�. (lock unlock�� ������)
//// - ���ø� ��� ���̺귯��, Ư�� STL ���� �θ� ���Ǵ� ������ ���.
//
//// lock�� unlock�� ����ڰ� ��å�� �ٲܼ� �ֵ��� ������ �غ���.
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
//List<int, NoLock> s;	// ��������, ��Ƽ�����忡 �������� �ʴ�.
//
//int main()
//{
//	s.push_front(10);
//}