///*
//// ������ �����Ǵ� ����� Ÿ���� ���� �����ϴ�.
//// seudo code
//// ������ �ӽ� ��ü ��ȯ.
//int operator++(int& a, int)
//{
//	int temp = a;
//	a = a + 1;
//	return temp;
//}
//
//// ������ ��������.
//int& operator++(int& a)
//{
//	return a = a + 1;
//}
//*/
//
//int main()
//{
//	int n = 0;
//	n = 10;
//
//	//n++ = 20;	// error	// �ӽð�ü�� ��ȯ�ϴ� operator++(n,int) �������� �������̶� �����ϱ� ���� int parameter�� ���� ������ �߰��� �س�.
//	++n = 20;	// ok		// ������ ��ȯ�ϴ� operator++(n)
//	// ++(++n);  �̰� �����Ϸ��� ������ �����ؾ��Ѵ�.
//
//	int a = 10;
//	int b = 0;
//	//a + b = 20;	// error.
//
//	int x[3] = { 1,2,3 };
//	x[0] = 5; // x.operator[](0) = 5; lvalue
//
//
//	// decltype	
//	int *p = &n;
//
//	// ǥ������ lvalue�� �Ǹ� ���� �ȵǸ� rvalue
//	decltype(n) n1;
//	decltype(p) d1;
//	decltype(*p) d2;		// int ? int& // *p = 20 �� �����ؼ� �̰� int& 
//	decltype(x[0]) d3;		// int&
//	auto a1 = x[0];			// int auto�� ������ ������.
//
//	decltype(++n) d4;		// int&
//	decltype(n++) d5;		// int
//}