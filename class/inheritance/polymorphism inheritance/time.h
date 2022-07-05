#include <iostream>
#ifndef TIMEH
#define TIMEH

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
	virtual void show();
	/*
	기초 클래스에서 가상메소드를 선언하면,
		그 함수는 파생 클래스에서 모두 가상이다.
	객체에 대한 참조/객체를 지시하는 포인터를 사용하여 가상 메소드가 호출되면,
		참조나 포인터를 위해 정의된 메서드를 사용하지 않고 객체형을 위해 정의된 메소드를 사용한다.
		->동적 결합
	상속을 위해 기초 클래스로 사용할 클래스를 정의할 때,
		파생 클래스에서 다시 정의해야 되는 클래스 메소드들은 가상 함수로 선언해야 한다.
	*/
	~Time();
	int getHour() { return hours; }
	int getMins() { return mins; }
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

class NewTime : public Time {
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void show();
	
};
#endif // !TIMEH