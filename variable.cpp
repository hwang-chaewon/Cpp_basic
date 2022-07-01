#include <iostream>
using namespace std;
/*
hello.cpp에도 main함수가 있고 
*/
int main() {
	/*
	변수를 만들 때 3가지
	1. 변수의 자료형
	2. 변수의 이름
	3. 변수가 어디에 저장되는가?(메모리 영역)
		컴파일러가 알아서 지정해 줌
	*/
	//변수 선언과 대입
	int a;
	a = 7;

	//변수 초기화: 선언&대입
	int b = 3;

	cout <<"a=" << a << "b=" << b << endl;

	return 0;
}