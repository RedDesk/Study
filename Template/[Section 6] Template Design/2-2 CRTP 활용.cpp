#include <iostream>
using namespace std;

// 1 ��Ŭ�� : �ϳ��� ��ü�� ������ �� �ְ� �ϴ� ������ ����.
// - private ������
// - ����� ���� ����
// - �ϳ��� ��ü�� ���� �����ϴ� static ��� �Լ�

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

// 2. Unique�� ��� Ŭ���� �����
// - ��� Ŭ������ static member data�� ��� �Ļ� Ŭ������ ���� �����ȴ�.
// - �Ļ� Ŭ���� ���� �ٸ� static member data�� �ʿ��� ���, ���� �ٸ� ��� Ŭ������ ����ؾ� �Ѵ�.
// - CRTP�� ����ϸ� ��� �Ļ� Ŭ���� ���� �ٸ� Ÿ���� ��� Ŭ������ ���� �� �ִ�.
// ������ �Ļ� Ŭ������ �̸��� ������� ������ ����ũ�� ��� Ŭ������ ����� ���� ����Ѵ�.
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