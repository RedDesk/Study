//#include <iostream>
//using namespace std;
//
//// CRTP ����̶� �Ѵ�.
//template<typename T>
//class RefCount
//{
//private:
//	int mCount;
//
//	// �ݵ�� virtual�� ������ �Ѵ�.
//	// ������ �����Լ� ���̺��� ���������. ������尡 �ִ� ��� �ذ��ؾ� �ұ�...??
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
//			delete static_cast<T*>(this);		// ���ø�ȭ �ؼ� �ڽ� Ŭ������ �����Ѵ�.
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