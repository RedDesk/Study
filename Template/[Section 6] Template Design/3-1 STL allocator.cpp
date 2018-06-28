//
//// STL의 vector를 생각해 보자.
//// 메모리 할당기가 있다.
//template<typename T> class allocator
//{
//public:
//	T * allocate() {}
//	void deallocate() {}
//};
//
//template<typename T, typename Ax = allocator<T>> class vector
//{
//	T* buff;
//	Ax ax;
//public:
//	void resize(int n)
//	{
//		// 버퍼 재할당이 필요 하다면 어떻게 하나
//		T* p = ax.allocate(n);
//		ax.deallocate(p);
//	}
//};
//
//int main()
//{
//	vector<int> v(10);
//	v.resize();
//}