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
//// list �� int�� ��°��� �ƴ϶� NODE�� ��� �ְ� �ȿ� �����Ϳ� ��, �� ��带
//// ������ �ִ� �����̱� ������ �޸� �Ҵ��� int �Ҵ��� �ƴ϶� NODE �Ҵ��� �̷�� ���� �Ѵ�.
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