#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	//switch()안에 들어가는 건 반드시 정수
	switch (a) {
	case 1:
		cout << "1을 입력하셨습니다";
		break;
	case 2:
		cout << "2를 입력하셨습니다";
		break;
	default:
		cout << "1,2외의 다른 수를 입력하셨습니다";
		break;
	}
	return 0;
}