#include<iostream>
#include"time.h"
using namespace std;

/*
상속
객체지향프로그래밍에서 가장 중요한 것은 재활용 가능한 코드를 만드는 것
*/
int main() {
	NewTime temp1();
	NewTime temp2(3, 30, 2);
	temp2.print();

	return 0;
}
