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

Time Time::operator*(int n) {
	Time result;
	long resultMin = hours * n * 60 + mins * n;
	result.hours = resultMin / 60;
	result.mins = resultMin % 60;
	return result;
}

std::ostream& operator<<(std::ostream& os, Time& t) {
	os << t.hours << "시간 " << t.mins << "분";
	return os;
}

/*
멤버 초기자 리스트 문법
: Time()
파생 클래스 객체를 사용하기 전, 기초 클래스의 객체가 먼저 생성되어야 한다.
기초 클래스에서 0으로 초기화된 hours와 mins가 들어오고, day만 0으로 초기화해주면 됨
*/
NewTime::NewTime() : Time(){
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h,m){
	day = d;
}

void NewTime::print() {
	std::cout << "일 : " << day << std::endl;
	show();
}