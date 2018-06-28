//코드 메모리를 줄이는 기법.
// 1. T를 쓰지 않는 멤버를 기반 클래스로 올리는 방법.

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

// 2. 모든 함수를 기반 클래스로 올리는 방법.
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
//// 파생은 캐스팅만 하도록.
//template<typename T> class Vector : private VectorBase
//{
//public:
//	int size() const { return VectorBase::size(); }
//	bool empty() const { return VectorBase::empty(); }
//	void push_front(const T& a) { VectorBase::push_front(static_cast<void*>(a)); }
//	T& front() { return static_cast<T&>(VectorBase::front()); }
//};