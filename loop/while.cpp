#include <iostream>
using namespace std;
int main() {
	/*
	while문
	while() 괄호 안에는 조건문 하나만 들어갈 수 있음
	초기화문을 loop전에 선언해주고,
	증감문을 loop안에 선언해주는 게 필요
	*/
	//for문과 while문은 ()안의 구성만 다르고 나머지는 비슷
	//다만 for문에서 i관련은 ()안에서 모두 선언하기 때문에 i가 지역 변수
	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}
	/*
	do while
	조건문이 참이든 거짓이든 무조건 처음1회는 정말 무조건 실행
	*/
	int j = 0;
	do {
		cout << j;
		j++;
	}while (false);
	return 0;
}