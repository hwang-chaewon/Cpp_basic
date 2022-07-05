/*
friemd
C++에서는 public부분 이외에도 멤버 변수로 접근할 수 있는 통로가 하나 더 있음(그게 friend)
함수를 어떤 클래스에 대해 friend로 만들게 되면 그 함수는 클래스의 private멤버에 접근 권한을 가짐
friend의 필요성: 이항 연산자(2개의 피련산자를 요구하는 연산자)
*/
#include<iostream>
#include"time.h"
using namespace std;

int main() {
    Time t1(1,20);
	Time t2;

	t2=3*t1;//t2=operator*(3,t1)과 같은 기능

	return 0;
}
