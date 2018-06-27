//#include <iostream>
//#include <vector>
//#include <type_traits>
//#include "Test.h"
//
//using namespace std;
//
//int main()
//{
//	/*
//	Test t1;
//	Test t2 = t1;		// copy
//	Test t3 = move(t2);	// move
//
//	bool b = is_nothrow_move_constructible<Test>::value;	// move생성자가 예외가 있는지 없는지 검사
//	cout << b << endl;
//	Test t4 = move_if_noexcept(t1);		// 예외가 있으면 copy생성자 없으면 move생성자
//	*/
//
//	//Test* p1 = new Test[2];
//	// 버퍼 생성시에도 메모리 할당후 생성자를 호출하자.
//	// 디폴트 생성자를 지원하지 않을수 있으니까.
//	Test* p1 = static_cast<Test*>(operator new(sizeof(Test) * 2));
//	for (size_t i = 0; i < 2; i++)
//	{
//		new(&p1[i]) Test;
//	}
//
//	//Test* p2 = new Test[4];
//	//1. 신규 버퍼는 메모리만 할당하고 생성자는 호출하지 않는다.
//	Test* p2 = static_cast<Test*>(operator new(sizeof(Test) * 4));
//
//	// !!!!!!!! g++ 컴파일러는 2번과 3번이 바뀌어져 있다 !!!!!!!! move 후 나머지 버퍼를 생성함.
//	// 2. 새로운 객체는 디폴트 생성자 호출
//	for (size_t i = 2; i < 4; i++)
//	{
//		new(&p2[i]) Test;	// 디폴트 생성자 호출.
//	}
//
//	// 3. move_if_noexcept 이용한 기존 버퍼 자원 이동or복사.
//	for (size_t i = 0; i < 2; i++)
//	{
//		//p2[i] = move(p2[i]);	// move대입..
//		// 생성자 호출이 필요하니 placement new를 쓰자.
//		// new(&p2[i]) Test;		// 디폴트 생성자 호출.
//		// new(&p2[i]) Test(p1[i]);	// 복사 생성자.
//		// new(&p2[i]) Test(move(p1[i]));	// move생성자
//		new(&p2[i]) Test(move_if_noexcept(p1[i]));	// 예외 검사후 move 사용.
//	}
//
//	// 3. 기존 버퍼 삭제.
//	// operator new 사용시 operator delete로 삭제
//	for (size_t i = 0; i < 2; i++)
//	{
//		p1[i].~Test();
//	}
//	operator delete(p1);
//
//	// 4. 다쓴 버퍼도 삭제.
//	for (size_t i = 0; i < 4; i++)
//	{
//		p2[i].~Test();
//	}
//	operator delete(p2);
//
//	cout << "vector ----------" << endl;
//	// stl의 vector가 이런식으로 동작한다.
//	vector<Test> v(2);
//	v.resize(4);
//
//}