//#include <iostream>
//
//class Animal
//{
//	int age;
//public:
//	Animal(int a) : age(a) {}
//};
//
//class Dog : public Animal
//{
//public:
//	Dog() : Animal(1) {}
//	// Dog(int age) : Animal(age) {} �̷��� ���� �ʴ´�.
//	using Animal::Animal;	// �θ��� �����ڸ� ��� �޴´�.
//};
//
//
//int main()
//{
//	Dog d; // 1��.
//	Dog d2(5); // ���� �Ѱ��� �����ڰ� �ʿ��ϴ�.
//}