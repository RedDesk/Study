#include <iostream>
using namespace std;

// 클래스 전방 선언
// 객체는 못만드지만 포인터는 가능하다. 객체를 만드려면 정의가 되있어야 한다.
class Test;
Test* p;		// 불완전한 타입( incomplete type )은 delete시 소멸자 호출 안됨.


class Test
{
public:
	Test() { cout << "Test()" << endl; }
	~Test() { cout << "~Test()" << endl; }
};

// chcecked delete 라고 한다.
void foo(Test* p)
{
	// 요즘 방식
	static_assert(sizeof(Test) > 0, "error, incomplete");
	// 예전방식
	//sizeof(Test);	// sizeof는 완전한 타입만 가능하다. error를 내뱉는다.
	delete p;
}

int main()
{
	Test* p = new Test;
	foo(p);

	// 두번재 인자로 default_delete 함수 객체를 넣어준다.
	// default_delete는 함수 객체니 () 연산자를 재정의 했을것이다. 
	// 내부 코드를 확인하면 static_assert(0 < sizeof (_Uty), "can't delete an incomplete type"); 
	unique_ptr<Test> up(new Test);
	shared_ptr<Test> sp(new Test);
}