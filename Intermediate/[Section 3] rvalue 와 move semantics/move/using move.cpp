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
//	Test& operator=(const Test& t) 			// ���� ���Կ�����
//	{
//		cout << "Copy=" << endl;
//		return *this;
//	}
//
//	Test& operator=(Test&& t) noexcept		// move ���Կ�����
//	{
//		cout << "Move=" << endl;
//		return *this;
//	}
//};
//
//template <typename T>
//void Swap(T& x, T& y)
//{
//	//Test temp = x;	// ���� ������
//	//x = y;			// ���� ����
//	//y = temp;		// ���� ����
//
//	Test temp = move(x);	// static_cast<Test&&>	move�� �������� ������ ��������ڸ� �̿��Ͽ� ����. 
//	x = move(y);			// ���� �����ڴ� rvalue�� ������ �ִ�.
//	y = move(temp);
//}
//
//int main()
//{
//	Test t1, t2;
//	//Swap(t1, t2);
//	//swap(t1, t2);	// std swap
//
//	// ���� ���縦 �Ҷ� move�� �������.
//	Test *p1 = new Test[2];
//	Test *p2 = new Test[4];
//
//	for (size_t i = 0; i < 2; i++)
//	{
//		//p2[i] = p1[i];		// copy ����
//		p2[i] = move(p1[i]);	// move ���� 
//	}
//
//	//vector<Test> v(2);
//	//v.resize(4);				// stl vector�� move ������ �ƴ϶� move������ ����Ѵ�.
//}