#include <iostream>
using namespace std;

// 1 싱클톤 : 하나의 객체만 생성할 수 있게 하는 디자인 패턴.
// - private 생성자
// - 복사와 대입 금지
// - 하나의 객체를 만들어서 리턴하는 static 멤버 함수

template<typename T>
class Singleton
{
protected:
	Singleton() {}

public:
	Singleton(const Singleton& c) = delete;
	void operator=(const Singleton& c) = delete;

	static T& getInstance()
	{
		static T instance;
		return instance;
	}
};

class Mouse : public Singleton<Mouse>
{
};

// 2. Unique한 기반 클래스 만들기
// - 기반 클래스의 static member data는 모든 파생 클래스에 의해 공유된다.
// - 파생 클래스 별로 다른 static member data가 필요한 경우, 서로 다른 기반 클래스를 사용해야 한다.
// - CRTP를 사용하면 모든 파생 클래스 별로 다른 타입의 기반 클래스를 만들 수 있다.
// 실제로 파생 클래스의 이름을 사용하진 않지만 유니크한 기반 클래스를 만들기 위해 사용한다.
template<typename T>
class Object
{
public :
	static int cnt;

	Object() { ++cnt; }
	~Object() { --cnt; }

	static int getCount() { return cnt; }
};
template<typename T> int Object<T>::cnt = 0;

class A : public Object<A> {};
class B : public Object<B>{};

int main()
{
	Mouse& c1 = Mouse::getInstance();
	Mouse& c2 = Mouse::getInstance();

	A a1, a2;
	B b1, b2;

	cout << b2.getCount() << endl;
}