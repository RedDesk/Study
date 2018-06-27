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
//	// Dog(int age) : Animal(age) {} 이렇게 하지 않는다.
//	using Animal::Animal;	// 부모의 생성자를 상속 받는다.
//};
//
//
//int main()
//{
//	Dog d; // 1살.
//	Dog d2(5); // 인자 한개의 생성자가 필요하다.
//}