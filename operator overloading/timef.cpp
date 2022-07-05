#include "time.h"

Time::Time()
{
	hours = mins = 0;
}

Time::Time(int h, int m) {
	hours = h;
	mins = m;
}

//시간을 더하는 함수. 단순함
void Time::addHours(int h) {
	hours += h;
};

//분을 더해 몇 시간 몇 분인지 알려주는 함수
void Time::addMins(int m) {
	mins += m;
	hours += mins / 60;
	mins %= 60;
};

//호출한 time객체와 매개변수로 넣은 time객체를 더해서 sum이라는 새로운 time객체를 만드는 함수
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