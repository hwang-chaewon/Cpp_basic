#include <iostream>
using namespace std;
/*
데이터형 변환
1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
2. 수식에 데이터형을 혼합하여 사용했을 때
3. 함수에 매개변수를 전달할 때
*/

/*
강제적으로 데이터형 변환
	typeName(변수)
	(typeName)변수
C++만의 강제 데이터형 변환
	static_cast<typeName>(변수)
*/

int main() {
	//데이터형 변환-1
	int a = 3.48189;
	cout << a << endl;

	//강제적으로 데이터형 변환
	char ch = 'M';
	cout << (int)ch << endl;
	//C++ 강제적으로 데이터형 변환
	cout << static_cast<int> (ch) << endl;

	return 0;
}
