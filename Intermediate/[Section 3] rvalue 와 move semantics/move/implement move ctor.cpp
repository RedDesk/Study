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

	//// 모든 멤버(객체타입)도 move해야 한다.
	//Buffer(Buffer&& b) noexcept
	//	: sz(b.sz), tag(move(b.tag)), test(move(b.test))
	//{
	//	buf = b.buf;
	//	b.buf = 0;
	//}

	// 대입 연산자
	//Buffer& operator=(const Buffer& b)
	//{
	//	sz = b.sz;
	//	buf = new int[sz];
	//	memcpy(buf, b.buf, sizeof(int)*sz);
	//	tag = b.tag;
	//	test = b.test;
	//	return *this;
	//}

	//// 무브 대입 연산자
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
//	Buffer b3 = move(b1);	// move 	사용자가 copy와 move를 안만들면 기본으로 
//							// 컴파일러가 둘다 제공하기 때문에 move가 호출된다.
//							// 하지만 copy만 사용자가 만들면 컴파일러가 move를 만들어 주지 않는다.
//}