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

//a
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

NewTime::NewTime() : Time(){
	day = 0;
}

NewTime::NewTime(int h, int m, int d) : Time(h,m){
	day = d;
}

//show라는 함수는 Time객체에서 호출됐을 때는 a부분과 같은 동작을 하게 되고,
	//NewTime객체에서 호출됐을 때는 아래와 같은 동작을 하게 된다.
	//show()에 붙은 virtual키워드 덕분에 가능. 호출됐을 때 객체를 따져서 그에 대응하는 기능을 하게 된다
void NewTime::show() {
	std::cout << "일 : " << day << std::endl;
	std::cout << "시간 : " << getHour() << std::endl;
	std::cout << "분 : " << getMins() << std::endl;
}