//class Base
//{
//public:
//	virtual void f1(double) {}
//	virtual void f2() const {}
//	virtual void f3() {}
//	void f4() {}
//};
//
///*
//class Derived : public Base
//{
//public:
//	virtual void f1(int) {}	// 인자가 잘못
//	virtual void f2() {}	// const 빼먹음
//	virtual void fa3() {}	// 이름 잘못 적음.
//	virtual void f4() {}	// f4는 가상함수 아님..
//};
//*/
//
//// C++ 11에서는 재정의 할시 override를 넣는다.
//class Derived : public Base
//{
//public:
//	virtual void f1(double) override {}	
//	//virtual void f2() override {}	// 이제 오류다.
//	//virtual void fa3() override {}  이제 오류다.
//	//virtual void f4() override {}	// 이제 오류다.
//};
//
//int main()
//{
//
//}