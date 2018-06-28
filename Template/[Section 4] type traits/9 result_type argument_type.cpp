//#include <iostream>
//using namespace std;

// �Լ��� ����Ÿ���� ���ϴ� ����� ������ ����!
// 1. primary template�� ����� "typedef T type"�� �����Ѵ�. (C++ using�� ��� ����)
// 2. �κ� Ư��ȭ�� ���ؼ� ���ϴ� Ÿ���� ������ �ֵ��� "TŸ���� ����"�Ѵ�.
// 3. �κ� Ư��ȭ�� ���ؼ� �Լ� Ÿ��(double(short,int)) ����� T�� ���� Ÿ�� (double)�� ������(����Ÿ��)�� �и� �Ѵ�.
// T(double(short,int)) => R(A1, A2)

//double hoo(short a, int b) { return 0; }

/*
template<typename T> struct result_type
{
	typedef T type;
};

// �κ� Ư��ȭ ������ �ʿ��ϴ�
template<typename R, typename A1, typename A2>
struct result_type<R(A1,A2)>	// ���ڰ� 2���� ����...?   ���߿� �������� ���ø��� �̿��ؼ� ����.
{
	typedef R type;
};


template<typename T> void foo(T& t)
{
	// T : double(short, int)
	typename result_type<T>::type ret;
	//result_type<int>::type ret;			// �̷��� �ϸ� intŸ���� �����ٵ�. �Լ��� ����Ÿ���� �ƴҰ�� �ǵ������� ������ ���� ������� primary template�� typedef�� �����ϸ� �ȴ�.

	cout << typeid(ret).name() << endl;
}
*/

// �Լ��� ����Ÿ���� ���ϴ� ����� ������ ����!
/*
template<typename T, size_t N > struct argument_type
{
	//typedef T type;
};


//template<typename R, typename A1, typename A2, size_t N >
//template<typename R, typename A1, typename A2, size_t N >
//struct argument_type<R(A1, A2), N> // ��� ���ڸ� ���ϴ���?? N?
//{
//	typedef ? type;	
//};


template<typename R, typename A1, typename A2>
struct argument_type<R(A1, A2), 0>
{
	typedef A1 type;
};

template<typename R, typename A1, typename A2>
struct argument_type<R(A1, A2), 1>
{
	typedef A2 type;
};

template<typename T> void foo(T& t)
{
	typename argument_type<T, 1>::type ret;
	cout << typeid(ret).name() << endl;
}

int main()
{
	foo(hoo);
}
*/