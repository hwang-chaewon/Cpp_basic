#include <iostream>

using namespace std;

/*
함수 템플릿
함수 일반화 수행
    구체적 데이터형을 포괄할 수 있는 일반형으로 함수 정의
*/

template <class Any>//Any: 템플릿으로 사용할 변수 이름
//class대신 typename을 써도 무방
Any sum(Any, Any);
template <class Any>
Any sum(float, float);

int main() {
    int a = 3;
    int b = 4;
    //sum(Any,Any)가 호출됨
    //여기서 Any는 int
    cout << sum(a, b) << endl;

    float c = 3; 14;
    float d = 1.592;
    //sum(float,float)가 호출됨
    cout << sum(c, d) << endl;

    return 0;
}

template<typename Any>
Any sum(Any a, Any b) {
    return a + b;
}

template<typename Any>
Any sum(float a, float b) {
    return a + b;
}
