//#include <iostream>
//using namespace std;
//
//// �� ���� �Լ��� ���� �Լ� ó�� �����ϰ� �����
//// this �����͸� �Ļ� Ŭ���� Ÿ������ ĳ���� �� �� �Լ� ȣ��.
//// Mircosoft�� ATL ���̺귯��.
//
//template<typename T>
//class Window
//{
//public:
//	void msgLoop()				// void msgLoop(Window* const this)
//	{
//		//OnClick();			// this->OnLick()
//		static_cast<T*>(this)->OnClick();		// !!!!! �̰� �����Ϸ��� �ڽ� Ŭ������ �̸��� �˾ƾ� �Ѵ�.!!!!!!
//	}
//	void OnClick() { cout << "Windows OnClick" << endl; }
//	//virtual void OnClick() { cout << "Windows OnClick" << endl; }		// �����Լ��� �ϸ� ������尡 �ִ�. 
//};
//
//class FrameWindow : public Window<FrameWindow>
//{
//public:
//	void OnClick() { cout << "FrameWindow OnClick" << endl; }
//};
//
//int main()
//{
//	FrameWindow fw;
//	fw.msgLoop();
//}