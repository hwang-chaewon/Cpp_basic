#include <iostream>
#define SIZE 20
using namespace std;
int main() {

	//char형의 배열인 문자열을 복사하고자 할 때는 크기를 미리 정의해 주어야 함
	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오.";
	cin >> animal;

	/*
	new연산자를 통해 사용자가 입력하는 것보다 한 칸 넉넉한 공간 지정함으로서 복사하기 충분한 공간을 확보. 
	실행 시간에 메모리 공간 확정
	*/
	ps = new char[strlen(animal) + 1];
	//strcpy(a,b): b의 값을 a에 복사. 실행 시 안정성 문제로 오류
	//strcpy_s(a,n,b): b의 값을 크기가 n인 a에 복사
		//C++에서 ps의 크기를 알아내는 법을 몰라 일단 strlen(animal) + 1을 그대로 가지고 옴
	strcpy_s(ps, strlen(animal) + 1,animal);

	cout << "입력하신 동물 이름을 복사했습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << "입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

	return 0;
}