#include <iostream>>
#include <string>
#include "Test.h"

using namespace std;

class Buffer
{
	size_t sz;
	//int* buf;
	string tag;
	Test test;
public:
	Buffer(size_t s, string t)
		:sz(s), tag(t)//, buf(new int[s]) 
	{}

	//~Buffer() { delete[] buf; }

	// deep copy ctor
	//Buffer(const Buffer& b) : sz(b.sz), tag(b.tag), test(b.test)
	//{
	//	buf = new int[sz];
	//	memcpy(buf, b.buf, sizeof(int)*sz);
	//}

	//// ��� ���(��üŸ��)�� move�ؾ� �Ѵ�.
	//Buffer(Buffer&& b) noexcept
	//	: sz(b.sz), tag(move(b.tag)), test(move(b.test))
	//{
	//	buf = b.buf;
	//	b.buf = 0;
	//}

	// ���� ������
	//Buffer& operator=(const Buffer& b)
	//{
	//	sz = b.sz;
	//	buf = new int[sz];
	//	memcpy(buf, b.buf, sizeof(int)*sz);
	//	tag = b.tag;
	//	test = b.test;
	//	return *this;
	//}

	//// ���� ���� ������
	//Buffer& operator=(Buffer&& b) noexcept
	//{
	//	sz = b.sz;
	//	buf = b.buf;
	//	b.buf = 0;
	//	tag = move(tag);
	//	test = move(test);
	//	return *this;
	//}

};


//int main()
//{
//	Buffer b1(1024, "SHARED");
//	Buffer b2 = b1; // copy
//	Buffer b3 = move(b1);	// move 	����ڰ� copy�� move�� �ȸ���� �⺻���� 
//							// �����Ϸ��� �Ѵ� �����ϱ� ������ move�� ȣ��ȴ�.
//							// ������ copy�� ����ڰ� ����� �����Ϸ��� move�� ����� ���� �ʴ´�.
//}