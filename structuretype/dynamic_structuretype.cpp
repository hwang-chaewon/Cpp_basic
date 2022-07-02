#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main() {

    /*
    동적 구조체: new를 사용해 생성한 구조체
    일반 구조체의 멤버 연산자: .
        ex: A.height
    동적 구조체의 멤버 연산자: ->
    */
    MyStruct* temp = new MyStruct;

    //동적 구조체의 멤버 연산자 ->를 사용하는 방법
    cout << "당신의 이름을 입력하십시오.\n";
    cin >> temp->name;

    //괄호와 . 연산자를 사용하는 방법
    cout << "당신의 나이를 입력하십시오.\n";
    cin >> (*temp).age;

    cout << "안녕하세요! " << temp->name << "씨!\n";
    cout << "당신은 " << temp->age << "살 이군요!\n";

    //(확실X)new로 사용한 건 반드시 delete로 돌려줘야 함
    delete temp;
    return 0;
}