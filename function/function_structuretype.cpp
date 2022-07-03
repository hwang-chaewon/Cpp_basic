#include <iostream>

using namespace std;

/*
구조체는 변수처럼 행동.
배열의 첫번째 원소의 주소를 알려주는 방식이 아닌,
함수의 온전한 값으로서 전달
    배열은 리턴할 수 없지만 구조체는 리턴 가능
단, 함수는 구조체의 원본이 아닌 복사본으로 작업
*/

//구조체
struct Time
{
    int hours;
    int mins;
};

const int minsPerHr = 60;

//함수 원형 제공
Time sum(Time*, Time*);
void showTime(Time);

int main() {
    Time day1 = { 5, 45 };
    Time day2 = { 4, 55 };

    Time total = sum(&day1, &day2);

    cout << "이틀간 소요 시간 : ";
    showTime(total);

    return 0;
}

Time sum(Time* t1, Time* t2) {
    Time total;

    //구조체의 값에서 멤버에 접근하고 싶을 때는 .
    //구조체의 주소에서 맴버에 접근하고 싶을 때는 ->
    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = t1->hours + t2->hours +
        (t1->mins + t2->mins) / minsPerHr;

    return total;
}

void showTime(Time t1) {
    cout << t1.hours << "시간, " << t1.mins << "분 입니다." << endl;
}