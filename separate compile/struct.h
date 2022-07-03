/*
header파일
구조체 선언, 함수 원형,템플릿 등 포함
*/
#ifndef STRUCT
#define STRUCT
#include <iostream>

using namespace std;

struct MyStruct
{
    string name;
    int age;
};

void display(MyStruct&);
#endif