//#include <iostream>
//#include <algorithm>		// std::swap
//#include <vector>
//
//using namespace std;
//
//class Test
//{
//public:
//	Test() {}
//	~Test() {}
//	Test(const Test& t) { cout << "Copy" << endl; }
//	Test(Test&& t) noexcept { cout << "move" << endl; }
//
//	Test& operator=(const Test& t) 			// 복사 대입연산자
//	{
//		cout << "Copy=" << endl;
//		return *this;
//	}
//
//	Test& operator=(Test&& t) noexcept		// move 대입연산자
//	{
//		cout << "Move=" << endl;
//		return *this;
//	}
//};
//
//template <typename T>
//void Swap(T& x, T& y)
//{
//	//Test temp = x;	// 복사 생성자
//	//x = y;			// 복사 대입
//	//y = temp;		// 복사 대입
//
//	Test temp = move(x);	// static_cast<Test&&>	move를 제공하지 않으면 복사생성자를 이용하여 들어간다. 
//	x = move(y);			// 복사 생성자는 rvalue를 받을수 있다.
//	y = move(temp);
//}
//
//int main()
//{
//	Test t1, t2;
//	//Swap(t1, t2);
//	//swap(t1, t2);	// std swap
//
//	// 버퍼 복사를 할땐 move를 사용하자.
//	Test *p1 = new Test[2];
//	Test *p2 = new Test[4];
//
//	for (size_t i = 0; i < 2; i++)
//	{
//		//p2[i] = p1[i];		// copy 대입
//		p2[i] = move(p1[i]);	// move 대입 
//	}
//
//	//vector<Test> v(2);
//	//v.resize(4);				// stl vector는 move 대입이 아니라 move생성을 사용한다.
//}