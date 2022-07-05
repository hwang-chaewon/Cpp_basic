#include<iostream>
#include"time.h"
using namespace std;
/*
<<연산자 오버로딩
<<연산자: cout에서 데이터의 흐름을 표현했던 연산자
*/
int main() {
    Time t1(3,45);
    t1.show();

    cout<<t1;//일반 출력과 다르게 기능할 것

    return 0;
}
