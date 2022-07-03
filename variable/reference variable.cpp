#include <iostream>

using namespace std;

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

/*
참조(reference)란?
	미리 정의된 변수의 실제 이름 대신 사용가능한 대용 이름
왜 참조를 사용할까?
	함수의 매개변수에 사용하기 위해서.
	구조체의 원본이 아니라 구조체의 복사본을 사용하는 것이 일반적.
	그러나 참조를 매개변수로 사용하게 된다면 복사본이 아니라 원본의 데이터로 작업할 수 있음
	-->구조체의 내용이 많다면 포인터 대신 참조를 사용하는 것이 실행 속도 측면에서 유리
*/

int main() {
	/*
	참조변수 만들기
	int a에 대한 참조변수 b
	&는 주소연산자이자 참조연산자
	*/
	int a;
	int& b = a;


	int wallet1 = 100;
	int wallet2 = 200;

	cout << "최초 상태" << endl;
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "참조를 이용한 값의 교환\n";
	swapA(wallet1, wallet2);
	cout << "참조 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "포인터를 이용한 값의 교환\n";
	swapB(&wallet1, &wallet2);
	cout << "포인터를 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

	cout << "값을 이용한 값의 교환\n";
	swapC(wallet1, wallet2);
	cout << "값을 이용한 교환 이후 상태\n";
	cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
	return 0;
}

//참조로 전달하는 방식
void swapA(int& a, int& b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}

//포인터로 전달하는 방식
void swapB(int* a, int* b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

//값으로 전달하는 방식
void swapC(int a, int b) {
	int temp;

	temp = a;
	a = b;
	b = temp;
}