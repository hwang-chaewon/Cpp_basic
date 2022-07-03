/*
분할 컴파일
주로 3가지 파일(mian함수, header파일, 함수 본체)로 나눔
코드의 volume이 클수록 분할 컴파일을 하는 것이 좋음.
한 부분을 고쳐야 할 때 수많은 코드 줄을 찾아보며 고치는 게 아니라 파일에 가서 고치면 되므로
*/
#include "struct.h"

int main() {
    MyStruct PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);
    return 0;
}