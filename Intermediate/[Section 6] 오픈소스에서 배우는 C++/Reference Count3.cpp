//#include <iostream>
//using namespace std;
//
//// ���ø� ���� T�� ������� ���� ����� ��� Ŭ������ �̾Ƴ���.	- Thin Template ���.
//// �ڵ� �޸𸮸� ����.
//class RefCountBase
//{
//protected:
//	int mutable mCount;							// c++11 atomic���� �ϸ� ��Ƽ�����忡 ����������.
//	~RefCountBase() {}
//	RefCountBase() : mCount(0) {}
//
//public:
//	// ��� �Լ��� ��� ������ �ٲܼ� ����.
//	// �׷���mCount�� mutable�� �Ѵ�.
//	void addRef() const { ++mCount; }
//};
//
//
//template<typename T> class RefCount : public RefCountBase
//{
//protected:
//	~RefCount() {}
//	RefCount() {}
//
//public:
//	//void release() 							// void release( RefCount* const this )
//	void release() const						// void release( const RefCount* const this )
//	{
//		if (--mCount == 0)
//			//delete static_cast<T*>(this);			// ���⼭ error�� �߻��Ѵ�.
//			//delete static_cast<T*>(const_cast<RefCount*>(this)); // ok
//			delete static_cast<const T*>(this);	// ok
//	}
//};
//
//
//class Truck : public RefCount<Truck> { public:	~Truck() { cout << "~Truck" << endl; } };
//class Bus : public RefCount<Bus> { public:	~Bus() { cout << "~Bus" << endl; } };
//
//int main()
//{
//	// �ڵ����� ����ǵ� �Ӽ��� �ٲ��� �ʰڴ�.
//	// ������ �����Լ��� ȣ���ؾ� �Ѵ�.
//	// ��� ��ü�� ��� �Լ��� �θ��� �ִ�.	
//	const Truck* p = new Truck;
//	p->addRef();		// �� �������� ����Ʈ �����͸� ���� �ذ�ȴ�.
//	p->release(); 
//}