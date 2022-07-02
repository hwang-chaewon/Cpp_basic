#include <iostream>
#include <climits>
using namespace std;

int main() {
	/*
	정수형 4개
	: short, int, long, long long
	*/
	//각 자료형이 저장할 수 있는 최대 크기를 나타내는 각 상수(predefined)를 대입
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int는 " << sizeof n_int << "바이트이다." << endl;
	cout << "이 바이트의 최대값은 " << n_int << "이다." << endl;

	/*
	unsigned가 자료형 앞에 붙게 된다면 음의 값은 저장X
	-->저장할 수 있는 양수 개수가 늘어남
	*/
	unsigned int a;

	/*
	실수형
	float
	*/

	/*
	문자형 char: 작은 문자형
		'짧은'문자형이 아니라 '작은'문자형인 이유
		: C++에서는 아스키 코드가 있어, 문자마다 대응되는 수가 있음
		  아스키 코드에 해당되어 숫자로 치환될 수 있는 문자는 아스키 코드로 다룰 수 있음
	*/
	//숫자 대입
	int aa = 77;
	char b= aa;
	cout <<"정수형 변수 aa를 char형으로 출력하면: " << b << endl;
	//직접 문자를 대입
	/*
	C++에서는 char형에 ""(큰따옴표)를 사용할 수 없음. ''(작은따옴표)만 가능
		: " "에는 null문자('/0')이 포함되어 있기 때문에 한 가지의 문자만 저장되는 char형에 넣으면 오류
	*/
	char bb = 'a';
	cout << "char형 변수 bb를 출력하면: " << bb << endl;

	/*
	bool: 0(false, 0) 혹은 1(true, 0이외의 모든 수)
	*/
	bool a_ = 0;
	bool b_ = 10;
	cout << "bool형 변수 a_는 " << a_ << endl;
	cout << "bool형 변수 b_는 " << b_ << endl;

	return 0;
}
