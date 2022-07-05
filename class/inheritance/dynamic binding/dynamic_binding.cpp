#include<iostream>
#include"time.h"
using namespace std;

const int MAX = 3;

int main() {

	//Time객체와 NewTime객체를 같이 관리하고 싶을 때.
	//하나의 배열로서 관리는 불가능하지만, Time을 지시하는 포인터들의 배열은 만들 수 있다.
	Time* times[MAX];
	int day;
	int hours;
	int mins;

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 원소를 정의합니다." << endl;
		cout << "시간을 입력하십시오." << endl;
		cin >> hours;
		cout << "분을 입력하십시오." << endl;
		cin >> mins;
		char check;
		cout << "일 정보가 있다면 1, 없다면 0을 입력하십시오." << endl;
		cin >> check;
		if (check == '0')
			times[i] = new Time(hours, mins);
		else {
			cout << "일을 입력하십시오." << endl;
			cin >> day;
			times[i] = new NewTime(hours, mins, day);
		}
	}

	for (int i = 0; i < MAX; i++) {
		cout << i + 1 << "번째 정보입니다." << endl;
		times[i]->show();//Times와 NewTimes에 해당하는 객체가 모두 실행됨
	}

	for (int i = 0; i < MAX; i++) {
		delete times[i];//여기서 times[i]는 항상 Times에 대한 객체-->Time을 Virtual로 선언
	}

	return 0;
}
