//template<typename T> class allocator
//{
//public:
//	T * allocate(int sz) { return new T[sz]; }
//	void deallocate(T* p) { delete[] p; }
//
//	// rebind
//	template<typename U> struct rebind
//	{
//		typedef allocator<U> other;
//	};
//};
//
//
//// list 는 int를 담는것이 아니라 NODE를 담고 있고 안에 데이터와 앞, 뒤 노드를
//// 가지고 있는 구조이기 때문에 메모리 할당은 int 할당이 아니라 NODE 할당이 이루어 져야 한다.
//template<typename T, typename Ax = allocator<T>> class list
//{
//	struct NODE { T data; NODE *next, *prev; };
//	//Ax ax;	// allocator<int>
//	//allocator<T>::rebind<NODE>::other ax;	// allocator<NODE> ax;
//	typename Ax::template rebind<NODE>::other ax;	// allocator<NODE> ax;
//
//public :
//	void push_front(const T& a)
//	{
//		ax.allocate(1);
//	}
//};
//
//int main()
//{
//	list<int, allocator<int>> s;
//	s.push_front(10);
//}