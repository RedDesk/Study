// C++ 98 / 03 초기화 구문의 문제점

int main()
{
	// 1. 초기화 방법이 너무 다양하다. 혼란스러워~
	int n1 = 0;
	int n2(0);
	int ar[3] = { 1,2,3 };
	Point p = { 1,2 };		// 구조체
	complex c(1, 2);		// 클래스

	// 2. 일반 멤버 배열을 초기화 할 수 없다.
	class Test
	{
		int x[10];
	};

	// 3. 동적 메모리 할당 배열을 초기화 할 수 없다.
	int* p = new int[3];

	// 4. STL 컨테이너를 초기화하는 편리한 방법이 없다.
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(1);
}






