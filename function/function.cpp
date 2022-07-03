#include <iostream>

using namespace std;

const float PIE = 3.14;
/*함수 원형 표시*/
void cheers(int n);
float circle(int x);

int main() {
    /*함수
    1. 함수 원형 제공
    2. 함수 호출
    3. 함수 정의 제공
        (유명한 함수의 경우 1,3은 라이브러리에서 제공)
    main함수에 들어가기 전 함수 원형을 보고 어떤 형태의 함수가 쓰이겠구나 짐작한 후, main에서 호출을 한 다음 그 함수 정의로 가서 내용을 수행하고 리턴값을 가지고 오는 것
    */
    int a;
    cout << "하나의 수를 입력하십시오." << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "원의 반지름 길이를 입력하십시오." << endl;
    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는 " << c << "입니다.";

    return 0;
}

/*함수 정의*/
//리턴값 없는 void 함수-->return문 생략 가능
void cheers(int n) {
    for (int i = 0; i < n; i++)
        cout << "Cheers!" << endl;
}

float circle(int x) {
    return x * x * PIE;
}
