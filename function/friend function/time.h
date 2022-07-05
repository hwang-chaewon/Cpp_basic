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

	//t2=t1*3; 으로 연산 순서를 바꿀 때를 대비
	Time operator*(int);
	
	void show();
	~Time();

	//friend 함수 만들기
	//멤버 함수는 아니지만(따라서 '.','->'등으로 호출 불가)멤버 함수와 동등한 접근 권한을 가짐(->private에 접근 가능)
	//t2=t1*3; 으로 연산 순서를 바꿀 때를 대비
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
};

#endif //TIMEH