//�ڵ� �޸𸮸� ���̴� ���.
// 1. T�� ���� �ʴ� ����� ��� Ŭ������ �ø��� ���.

/*
class VectorBase
{
protected:
	int sz;
public:
	int size() const {}
	bool empty() const {}
};

template<typename T> class Vector : public VectorBase
{
	T* buff;
public:
	void push_front(const T& a) {}
	T& front() {}
};
*/

// 2. ��� �Լ��� ��� Ŭ������ �ø��� ���.
//class VectorBase
//{
//protected:
//	void* buff;
//	int sz;
//public:
//	int size() const {}
//	bool empty() const {}
//	void push_front(const void* a) {}
//	void* front() {}
//};
//
//// �Ļ��� ĳ���ø� �ϵ���.
//template<typename T> class Vector : private VectorBase
//{
//public:
//	int size() const { return VectorBase::size(); }
//	bool empty() const { return VectorBase::empty(); }
//	void push_front(const T& a) { VectorBase::push_front(static_cast<void*>(a)); }
//	T& front() { return static_cast<T&>(VectorBase::front()); }
//};