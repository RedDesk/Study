

struct Point
{
	int x, y;
};

class Complex
{
	int re, im;
public:
	Complex(int r, int i) : re(r), im(i) {}
};

int main()
{
	//	int n = 0;
	//	int x[2] = { 1,2 };
	//	Point p = { 1,2 };
	//	Complex c(1, 2);

	// 하나의 방법으로 초기화 하자. 일관된 초기화 (Uniform initialize, brace init)
	/*
		int  n{ 0 };
		int  x[2]{ 1,2 };
		Point   p{ 1,2 };
		Complex c{ 1, 2 };
	*/
	
	// 위의 방법과는 미묘한 차이가 있다. copy initialize
	int  n = { 0 };
	int  x[2] = { 1,2 };
	Point   p = { 1,2 };
	Complex c = { 1, 2 };


	int n2 = 3.4; // ok
	//int n3 = { 3.4 }; // error. prevent narrow

	//char c1{ 300 }; // error
	char c2{ 100 }; // ok

}