//using LREF = int&;
//using RREF = int&&;
//
//// ���ø� typedef �� reference collapse�� �߻���.
//// ����ڰ� Ÿ���� �������� ������ ���� �߻�.
//template<typename T> void foo(T& a ) {}
//
//int main()
//{
//	int n = 10;
//
//	// so easy!!
//	LREF r1 = n;
//	RREF r2 = 10;
//
//
//	// reference collapse ��Ģ
//	// &	&	&
//	// &	&&	&
//	// &&	&	&
//	// &&	&&	&&  !!! �̰�츸 rvalue...
//
//	// &�� ��ĥ��� ��� ó���Ұų� reference collapse
//	LREF& r3 = n;			// int& & r3 = ??
//	RREF& r4 = n;
//	LREF&& r5 = n;
//	RREF&& r6 = 10;
//
//
//	int& && r7; // ������ ����...  ����ڰ� Ÿ���� ������ ������ �߻�.
//}