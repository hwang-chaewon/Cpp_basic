#include <iostream>
using namespace std;
int main() {
	const int Size=15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "안녕하세요, 저는 " << name2 << "입니다. 당신의 이름은? " << endl;
	
	// >>: 입력받은 것을 >>오른쪽에 저장하겠다는 흐름을 나타냄
	/*
	cin: string객체에 키보드 입력을 저장할 수 있음. 공백을 입력의 끝으로 인식함
	cin.getline(입력받을 변수,가능한 최대 크기): 공백까지 포함하여 입력받음
	cin.get(,): cin.getline(,)과 동일
	*/
	cin.getline(name1,Size) >> name1;
	cout << name1 << "님, " << strlen(name1) << "자의 이름이 " << Size << "바이트 크기의 배열에 저장되었습니다." << endl;
	cout << "이름이 " << name1[0] << "자로 시작하는군요." << endl;
	cout << "제 이름의 첫글자는 " << name2[0] << "이랍니다." << endl;

	return 0;
}