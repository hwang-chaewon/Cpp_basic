#include <iostream> 

using namespace std;
/*
인라인 함수
일반적인 함수 호출:함수의 주소로 jump하는 과정
컴파일러의 인라인 함수 호출: jump가 아닌, 대응하는 함수 코드로 대체하는 것
    인라인 함수: 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
*/
inline float square(float x) {
    return x * x;
}

int main() {
    int a = 5;
    cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
    float b = square(a);
    cout << b <<endl;

    return 0;
}