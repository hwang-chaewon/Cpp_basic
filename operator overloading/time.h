#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time(); //매개변수가 없을 경우 생성자
	Time(int, int);//매개변수가 2개 있는 생성자
	void addHours(int);
	void addMins(int);

    /*
    연산자 오버로딩
    operator를 쓴 다음 어떤 연산자를 오버로딩할 건지 적어주기
    */
	Time operator+(Time&);

	void show();
	~Time();
};
#endif
