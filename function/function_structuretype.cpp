#include <iostream>

using namespace std;

/*
����ü�� ����ó�� �ൿ.
�迭�� ù��° ������ �ּҸ� �˷��ִ� ����� �ƴ�,
�Լ��� ������ �����μ� ����
    �迭�� ������ �� ������ ����ü�� ���� ����
��, �Լ��� ����ü�� ������ �ƴ� ���纻���� �۾�
*/

//����ü
struct Time
{
    int hours;
    int mins;
};

const int minsPerHr = 60;

//�Լ� ���� ����
Time sum(Time*, Time*);
void showTime(Time);

int main() {
    Time day1 = { 5, 45 };
    Time day2 = { 4, 55 };

    Time total = sum(&day1, &day2);

    cout << "��Ʋ�� �ҿ� �ð� : ";
    showTime(total);

    return 0;
}

Time sum(Time* t1, Time* t2) {
    Time total;

    //����ü�� ������ ����� �����ϰ� ���� ���� .
    //����ü�� �ּҿ��� �ɹ��� �����ϰ� ���� ���� ->
    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = t1->hours + t2->hours +
        (t1->mins + t2->mins) / minsPerHr;

    return total;
}

void showTime(Time t1) {
    cout << t1.hours << "�ð�, " << t1.mins << "�� �Դϴ�." << endl;
}