#include <iostream>

using namespace std;

int main() {
	//원의 넓이를 구하는 프로그램 만들기

	/*
	상수를 사용하기 위해선 상수 정의 필요
	const제한자를 통해 상수 정의
	*/
	const float PIE = 3.1415926535;
	int r = 3;
	float s = r * r*PIE;
	cout << s << endl;
	return 0;
}