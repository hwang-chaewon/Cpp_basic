#include <iostream>//전처리 지시자
//전처리 지시자에서는 많이 쓰는 함수들의 원형을 미리 정의해 놓음
/*
c++에서 함수를 사용하려면,
반드시 그 함수의 원형을 미리 정의해야 함
*/

using namespace std;
/*
이 문장이 없다면 아래의 코드를 
	std::cout << "Hello, World!" << std::endl;
로 적어야 함
/*
';(세미콜론)': 종결자.
종결자만이 한 문장의 끝이므로 종결자 전까지는 얼마든지 줄을 바꿔도 됨
*/

//c++코드에는 반드시 main함수가 있어야 함
//실행되는 건 main함수
int main() {
	//cout: 콘솔창에 출력하는 함수
	//endl: 줄바꿈 함수
	// '<<' : 데이터의 흐름을 나타냄
	cout << "Hello, World!" << endl;

	return 0;
}