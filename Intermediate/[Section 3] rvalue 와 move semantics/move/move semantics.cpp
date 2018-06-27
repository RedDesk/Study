//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Cat
//{
//	static int refCount;
//	char* name;
//	int age;
//public:
//	Cat() {}
//
//	Cat(const char* n, int a) : age(a)
//	{
//		name = new char[strlen(n) + 1];
//		strcpy(name, n);
//		Cat::refCount++;
//	}
//	~Cat()
//	{
//		Cat::refCount--;
//		if (Cat::refCount == 0)
//			delete[] name;
//	}
//
//	//Cat(const Cat& c) : name(c.name), age(c.age) { Cat::refCount++; }
//
//	//*
//	// ���� ����� ������ ���� ������.
//	// ���ڷ� lvalue, rvalue �Ѵ� ������ �ִ�.
//	Cat(const Cat& c) : age(c.age)
//	{
//		name = new char[strlen(c.name) + 1];
//		strcpy(name, c.name);
//	}
//	//*/
//
//	// ������ ����(�ڿ�����)�� �̵� ������
//	// rvalue�� ������ �ִ�.
//	// ������ �ʾƵ� ������ ��������� ���� ����� ���� ����.
//	Cat(Cat&& c) : name(c.name), age(c.age)
//	{
//		c.name = 0;
//	}
//};
//
//int Cat::refCount = 0;
//
//
//
//Cat foo()
//{
//	Cat cat("NABI", 2);
//	return cat;
//}
//
//int main()
//{
//	//Cat c1("NABI", 2);
//	//Cat c2 = c1; // runtime error; ���ο��� �ڿ��Ҵ��� �ϴ� deep copy �ؾ� �Ѵ�.
//
//
//	Cat t1;
//	Cat t2 = t1;		// ���� ������
//	Cat t3 = Cat();		// move ������
//}