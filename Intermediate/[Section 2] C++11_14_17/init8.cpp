/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

class Point
{
public:
	int x;
	int y;

	//Point() {} // 사용자가 제공할 경우 두개의 이니셜라이즈 방법 모두 쓰레기값.
	Point() = default;	// 디폴트 생성자로 만들어 달라고 할경우.
};
int main()
{
	// www.cppreference.com
	Point p1;   // default initialization
	Point p2{}; // value   initialization

	cout << p1.x << endl; // 쓰레기값
	cout << p2.x << endl; // 0
}
