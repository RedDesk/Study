/*
* HOME       : ecourse.co.kr
* EMAIL      : smkang @ codenuri.co.kr
* COURSENAME : C++ Intermediate
* Copyright (C) 2018 CODENURI Inc. All rights reserved.
*/

#include <iostream>
using namespace std;

// aggregate initialization
// aggregate type : {} 로 초기화 가능한것. 구조체, 배열.
// 조건 사용자가 생성자를 만들면안됨, 가상 함수 있으면 안됨. 자세한건 cppreference.com
struct Point
{
	int x, y;
	
	void foo() {}

//	virtual void foo() {} 

//	Point() = default;
//	Point() {}				// 1
//	Point(int a, int b) { }	// 2
};

int main()
{
	Point p1;			// 1. ok
	Point p2 { 1,2 };	// 2. ???
}
