//#include <iostream>
//
//using namespace std;
//
//class Test
//{
//public:
//	Test() {}
//	~Test() {}
//	Test(const Test& t) { cout << "Copy" << endl; }
//	Test(Test&& t) { cout << "move" << endl; }
//
//	Test& operator=(const Test& t) { return *this; }	// 복사 대입연산자
//	Test& operator=(Test&& t) { return *this; }			// move 대입연산자
//};
//
//
//int main()
//{
//	Test t1;
//	Test t2 = t1;							// copy
//	Test t3 = Test();						// move   *최적화로 인해 move가 한번 불림.
//	Test t4 = static_cast<Test&&>(t1);		// move
//											// 복사가 아닌 move 생성자를 호출해 달라.
//	Test t5 = move(t2);						// move 내부에서 위에처럼 캐스팅을 한다.
//
//
//
//}