#include "time.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

void Time::addHours(int h) {
	hours += h;
};

void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

//operator+: Time객체와 Time객체를 더함
Time Time::operator+(Time& t) {
	Time sum;
	sum.mins = mins + t.mins;
	sum.hours = hours + t.hours;
	sum.hours += sum.mins / 60;
	sum.mins %= 60;
	return sum;
};

void Time::show() {
	std::cout << "시간 : " << hours << std::endl;
	std::cout << "분 : " << mins << std::endl;
}

Time::~Time()
{
}

//operator*: Time객체와 정수를 곱함
//함수의 매개변수에 취하는 것이 Time의 객체가 아니라 int형 변수이기 때문에 연산자 오버로딩 방법으로만은 해결 불가
//-->friend함수를 만듦으로서 해결
//t2=3*t1; 으로 할 때 실행됨
Time operator*(int n,Time& t) {
	Time result;
	long resultMin = t.hours * n * 60 + t.mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}

//t2=t1*3; 으로 할 때 실행됨. 연산 순서를 바꿀 때를 대비
Time Time::operator*(int n){
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}
