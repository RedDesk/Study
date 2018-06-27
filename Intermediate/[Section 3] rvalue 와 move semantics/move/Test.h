#pragma once
#include <iostream>

// move 생성자와 대입에 noexcept를 하는 이유는 복사의 경우 복사 실패를 하여도
// 원본은 손실이 없기 떄문에 원본을 사용할수 있으나.
// move경우 이동중 예외가 발생할 경우 원본 버퍼를 복원중 예외가 발생할수도 있기 때문에 noexcept를 사용한다.
// 사용하는 쪽에서도 move_if_noexcept를 사용하는게 안전하다. 

class Test
{
public:
	Test() { std::cout << "Test()" << std::endl; }
	~Test() { std::cout << "~Test()" << std::endl; }
	Test(const Test& t) { std::cout << "Copy" << std::endl; }
	Test(Test&& t) noexcept { std::cout << "move" << std::endl; }

	Test& operator=(const Test& t) 			// 복사 대입연산자
	{
		std::cout << "Copy=" << std::endl;
		return *this;
	}

	Test& operator=(Test&& t) noexcept		// move 대입연산자
	{
		std::cout << "Move=" << std::endl;
		return *this;
	}
};