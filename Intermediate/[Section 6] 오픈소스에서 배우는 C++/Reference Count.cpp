//#include <iostream>
//
//using namespace std;
//
//class Car
//{
//	int mCount;
//private :
//	~Car() { cout << " ~Car()" << endl; }
//
//public:
//	Car() : mCount(0) {}
//
//	void addRef() { ++mCount; }
//	void release() { if (--mCount == 0) delete this; }
//};
//
//Car* p2;
//
//int main()
//{
//	Car* p1 = new Car;
//	p1->addRef();
//
//	p2 = p1;		// 다른곳에 객체 주소 복사..
//	p2->addRef();
//
//	//delete p1;		// 소멸자를 private으로...
//
//	p1->release();
//	p2->release();
//}