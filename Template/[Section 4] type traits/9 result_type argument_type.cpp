//#include <iostream>
//using namespace std;

// 함수의 리턴타입을 구하는 방법을 구현해 보자!
// 1. primary template을 만들고 "typedef T type"을 제공한다. (C++ using도 사용 가능)
// 2. 부분 특수화를 통해서 원하는 타입을 얻을수 있도록 "T타입을 분할"한다.
// 3. 부분 특수화를 통해서 함수 타입(double(short,int)) 모양인 T를 리턴 타입 (double)과 나머지(인자타입)로 분리 한다.
// T(double(short,int)) => R(A1, A2)

//double hoo(short a, int b) { return 0; }

/*
template<typename T> struct result_type
{
	typedef T type;
};

// 부분 특수화 버전이 필요하다
template<typename R, typename A1, typename A2>
struct result_type<R(A1,A2)>	// 인자가 2개만 쓰나...?   나중에 가변인자 템플릿을 이용해서 쓴다.
{
	typedef R type;
};


template<typename T> void foo(T& t)
{
	// T : double(short, int)
	typename result_type<T>::type ret;
	//result_type<int>::type ret;			// 이렇게 하면 int타입이 나올텐데. 함수의 리턴타입이 아닐경우 의도적으로 오류를 내고 싶을경우 primary template의 typedef를 삭제하면 된다.

	cout << typeid(ret).name() << endl;
}
*/

// 함수의 인자타입을 구하는 방법을 구현해 보자!
/*
template<typename T, size_t N > struct argument_type
{
	//typedef T type;
};


//template<typename R, typename A1, typename A2, size_t N >
//template<typename R, typename A1, typename A2, size_t N >
//struct argument_type<R(A1, A2), N> // 어느 인자를 원하는지?? N?
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