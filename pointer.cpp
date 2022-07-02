#include <iostream>
using namespace std;
int main() {

	int val = 3;
	//변수의 주소 알아내기: 앞에 &붙이기
	//주소는 보통 16진수 표기
	cout << &val << endl;

	/*
	C++:객체지향 프로그래밍 개념을 탑재
	객체지향 프로그래밍의 가장 큰 특징
		:컴파일 시간이 아닌 실행 시간에 어떤 결정을 내릴 수 있음
		ex. 배열의 크기를 실행 시간 중 결정할 수 있음
	*/

	/*
	포인터
	지금까지는 사용할 변수의 이름을 통해 변수를 관리.
	포인터는 저장할 주소에 이름을 붙인다는 개념
	즉 포인터의 이름이 주소를 나타냄
		이를 구현하기 위해 C++에서는 간접값 연산자 * 사용
	*/
	int *a; //C style
	int* b; //C++ style
	int* c, d; //c는 포인터 변수, d는 일반적인 int형 변수
	//포인터 예제
	int aa = 6;
	int* bb;
	bb = &aa;
	cout << "aa의 값: " << aa << endl;
	cout << "*bb의 값: " << *bb << endl;//포인터 변수의 값을 확인할 때는 *붙이기
	cout << "aa의 주소: " << &aa << endl;
	cout << "*bb의 주소: " << bb << endl;//포인터 변수의 주소를 확인할 때는 *빼기
	*bb = *bb + 1;
	cout << "이제 aa의 값은 " << aa << endl;



	return 0;
}