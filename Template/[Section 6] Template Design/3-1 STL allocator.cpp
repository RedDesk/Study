//
//// STL�� vector�� ������ ����.
//// �޸� �Ҵ�Ⱑ �ִ�.
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
//		// ���� ���Ҵ��� �ʿ� �ϴٸ� ��� �ϳ�
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