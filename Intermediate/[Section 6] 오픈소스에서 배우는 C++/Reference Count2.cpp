//#include <iostream>
//using namespace std;
//
//// CRTP 기법이라 한다.
//template<typename T>
//class RefCount
//{
//private:
//	int mCount;
//
//	// 반드시 virtual로 만들어야 한다.
//	// 하지만 가상함수 테이블이 만들어진다. 오버헤드가 있다 어떻게 해결해야 할까...??
//protected:
//	//virtual ~RefCount() { cout << "~RefCount" << endl; }
//	~RefCount() {}
//	RefCount() : mCount(0) {}
//
//public:
//	void addRef() { ++mCount; }
//	void release()								// void release( RefCount* const this )
//	{
//		if (--mCount == 0)
//			delete static_cast<T*>(this);		// 템플릿화 해서 자식 클래스로 삭제한다.
//	}
//};
//
//class Truck : public RefCount<Truck>
//{
//public:
//	~Truck() { cout << "~Truck" << endl; }
//};
//
//
//int main()
//{
//	Truck* p = new Truck;
//	p->addRef();
//	p->release();
//}