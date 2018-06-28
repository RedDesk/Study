//#include <iostream>
//using namespace std;
//
//// 비 가상 함수를 가상 함수 처럼 동작하게 만들기
//// this 포인터를 파생 클래스 타입으로 캐스팅 한 후 함수 호출.
//// Mircosoft의 ATL 라이브러리.
//
//template<typename T>
//class Window
//{
//public:
//	void msgLoop()				// void msgLoop(Window* const this)
//	{
//		//OnClick();			// this->OnLick()
//		static_cast<T*>(this)->OnClick();		// !!!!! 이게 가능하려면 자식 클래스의 이름을 알아야 한다.!!!!!!
//	}
//	void OnClick() { cout << "Windows OnClick" << endl; }
//	//virtual void OnClick() { cout << "Windows OnClick" << endl; }		// 가상함수로 하면 오버헤드가 있다. 
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