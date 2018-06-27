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
//	// 깊은 복사로 구현한 복사 생성자.
//	// 인자로 lvalue, rvalue 둘다 받을수 있다.
//	Cat(const Cat& c) : age(c.age)
//	{
//		name = new char[strlen(c.name) + 1];
//		strcpy(name, c.name);
//	}
//	//*/
//
//	// 소유권 이전(자원전달)의 이동 생성자
//	// rvalue만 받을수 있다.
//	// 만들지 않아도 되지만 성능향상을 위해 만드는 것이 좋다.
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
//	//Cat c2 = c1; // runtime error; 내부에서 자원할당을 하니 deep copy 해야 한다.
//
//
//	Cat t1;
//	Cat t2 = t1;		// 복사 샛성자
//	Cat t3 = Cat();		// move 생성자
//}