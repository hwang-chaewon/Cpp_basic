/*
연산자 오버로딩
C++이 가진 다형성 중 하나
*/
#include<iostream>
#include"time.h"
using namespace std;

int main() {
    //Time 클래스: 시간과 분을 가지고 있고 그것에 대한 연산을 수행
	Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	//operator+의 기능
    //함수 호출처럼 operator+를 써도 되고,
    Time total;
	total = day1.operator+(day2);
	total.show();

    //덧셈처럼 day1+day2로 써도 된다
    Time total2;
    total2=day1+day2;//여기의 +는 일반적인 +가 아니라 우리가 정의한 +에 맞게 기능한다
    total2.show();

	return 0;
}