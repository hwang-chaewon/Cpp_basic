#include <iostream>
#include <cstring>
using namespace std;
int main() {
	//char문자열: char를 다른 char에 통째로 대입하는 것 불가
	//string: string을 다른 string에 통쨰로 대입하는 것 가능
	string str1;
	string str2 = "charwon";
	str1 = str2;
	return 0;
}