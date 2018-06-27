

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

	// �ϳ��� ������� �ʱ�ȭ ����. �ϰ��� �ʱ�ȭ (Uniform initialize, brace init)
	/*
		int  n{ 0 };
		int  x[2]{ 1,2 };
		Point   p{ 1,2 };
		Complex c{ 1, 2 };
	*/
	
	// ���� ������� �̹��� ���̰� �ִ�. copy initialize
	int  n = { 0 };
	int  x[2] = { 1,2 };
	Point   p = { 1,2 };
	Complex c = { 1, 2 };


	int n2 = 3.4; // ok
	//int n3 = { 3.4 }; // error. prevent narrow

	//char c1{ 300 }; // error
	char c2{ 100 }; // ok

}