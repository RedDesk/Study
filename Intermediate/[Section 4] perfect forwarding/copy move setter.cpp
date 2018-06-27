//#include <iostream>
//using namespace std;
//
//class Data
//{
//public:
//	Data() {	}
//	~Data() {}
//
//	Data(const Data& t)
//	{
//		cout << "copy ctor" << endl;
//	}
//
//	Data(Data&& t) noexcept
//	{
//		cout << "move ctor" << endl;
//	}
//
//	Data& operator=(const Data& t)
//	{
//		cout << "copy=" << endl;
//		return *this;
//	}
//
//	Data& operator=(Data&& t) noexcept
//	{
//		cout << "move=" << endl;
//		return *this;
//	}
//};
//
//class Test
//{
//	Data data;
//public:
//	// ���ڵ�� ������ copy=�� ��� 
//	//void setData(const Data& d) { data = d; }
//
//	// ���ڵ�� ���? move=?? no!! copy= 
//	// ��� ��ü�� move �ɼ� ����!!
//	// void setData(const Data& d) { data = move(d); }
//
//	// ���1. move setter�� copy setter�� ������ �Լ��� ����
//	// ���� : overhead�� ����. 
//	// ���� : setter 2���� �� �����ؾ� �Ѵ�.
//	//void setData(const Data& d) { data = d; }
//	//void setData(Data&& d) { data = move(d); }
//
//	// ���2 call by value�� �̿��Ѵ�.
//	// ���� : setter�� �Ѱ��� �����Ѵ�.
//	// ���� : move= �� overhead�� �߻��Ѵ�.
//	//void setData(Data d) { data = move(d); }
//
//	// ���3 forwarding reference�� �̿��Ѵ�.
//	// ���� : ������� ���� �ϳ��� �����ϸ� �ȴ�.
//	// ���� : side effect�� ����ؾ� �Ѵ�.
//	//		  T�� data�� �Ͻ��� ����ȯ�̳� �ٸ� Ÿ���� ��� ���� ����� �ʿ��ϴ�.
//	template<typename T>
//	void setData(T&& a)
//	{
//		data = std::forward<T>(a);
//	}
//};
//
//int main()
//{
//	Test test;
//	Data d;
//
//	//test.setData(d);			// �����Ŀ��� d�� ����Ұ��̴�.
//	//test.setData(move(d));		// �����Ŀ��� d�� ���Ұ�.
//
//	test.setData<Data&>(d);
//	test.setData<Data&&>(move(d));//static_cast<Data&&>(d));
//}