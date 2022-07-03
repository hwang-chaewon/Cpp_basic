#include <iostream>

using namespace std;

//이름은 같지만 매개변수가 다른 다형성을 가진 함수들
//같은 동작을 수행하지만 데이터형이 다를 때를 대비해 이렇게 다형성을 가진 함수들을 만듦
int sum(int, int);
float sum(float, float);

int main() {
	cout << "두 정수를 입력하십시오. \n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n";
	cout << "두 실수를 입력하십시오. \n";
	float c, d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << sum(c, d) << "입니다.\n";

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}