#include <iostream>
using namespace std;

int func(int);

int main() {
	/*
	함수를 지시하는 포인터
	어떤 함수에 함수의 주소를 매개변수로 넘겨주는 경우 사용
	1. 함수의 주소를 얻기
	2. 함수를 지시하는 포인터 선언
	3. 함수를 지시하는 포인터 사용해 그 함수 호출
	*/

	//함수의 이름만 적으면 함수 주소를 출력할 수 있음
	cout << func << endl;

	int(*pf)(int);//포인터도 int형으로 만들어서 씀
	pf = func;//포인터에 함수의 주소 전달. pf가 함수 이름과 같은 역할을 수행하게 됨
	cout << (*pf)(3) << endl;//pf도 func함수와 같이 기능하여 3을 입력하면 4를 출력하게 됨
	return 0;
}
int func(int n) {
	return n + 1;
}