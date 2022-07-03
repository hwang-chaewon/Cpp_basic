#include <iostream>
using namespace std;
void countDown(int);
int main() {
	/*
	재귀함수
	재귀호출: 자기 자신 호출
	if문 조건이 true인 한에 계속 자기 자신 함수를 실행함
	if문 조건이 false가 되는 순간부터 if문 다음 문장을 실행
		재귀호출 한 횟수만큼 거꾸로 거슬러올라가면서 실행
	*/
	countDown(5);

	return 0;
}

void countDown(int n) {
	cout << "counting..." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}