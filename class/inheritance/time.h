#include <iostream>
#ifndef TIMEH
#define TIMEH

//기초 클래스
class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

//파생 클래스. Time이란 클래스에서 NewTime이란 파생 클래스를 만든 것
//그냥 상속을 받은 클래스인듯.
class NewTime : public Time {
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();
	
};
#endif // !TIMEH