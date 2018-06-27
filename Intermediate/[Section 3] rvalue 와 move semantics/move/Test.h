#pragma once
#include <iostream>

// move �����ڿ� ���Կ� noexcept�� �ϴ� ������ ������ ��� ���� ���и� �Ͽ���
// ������ �ս��� ���� ������ ������ ����Ҽ� ������.
// move��� �̵��� ���ܰ� �߻��� ��� ���� ���۸� ������ ���ܰ� �߻��Ҽ��� �ֱ� ������ noexcept�� ����Ѵ�.
// ����ϴ� �ʿ����� move_if_noexcept�� ����ϴ°� �����ϴ�. 

class Test
{
public:
	Test() { std::cout << "Test()" << std::endl; }
	~Test() { std::cout << "~Test()" << std::endl; }
	Test(const Test& t) { std::cout << "Copy" << std::endl; }
	Test(Test&& t) noexcept { std::cout << "move" << std::endl; }

	Test& operator=(const Test& t) 			// ���� ���Կ�����
	{
		std::cout << "Copy=" << std::endl;
		return *this;
	}

	Test& operator=(Test&& t) noexcept		// move ���Կ�����
	{
		std::cout << "Move=" << std::endl;
		return *this;
	}
};