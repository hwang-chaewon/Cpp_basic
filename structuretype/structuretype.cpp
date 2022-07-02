#include <iostream>
using namespace std;
int main() {
	/*
	구조체
	구조체: 다른 데이터형이 허용되는 데이터의 집합
	사용자 정의로 새로운 데이터형을 만드는 것
	구조체 변수를 데이터형처럼 사용함 
		C.F.배열: 같은 데이터형의 집합
	구조체 선언: structure 키워드
	구조체에 담긴 내용: {}로 묶어서 정의
		{}안에서도 ;를 써야 함
	*/
	struct MyStruct 
	{
		string name;
		string position;
		float height;
		float weight;
	};

	//구조체로 변수 만들기 방법(1): 멤버 이용
	MyStruct A;
	A.name = "Choi";
	A.height = 187.5;
	//구조체로 변수 만들기 방법(2): {,}
	//모든 멤버 값을 넣을 필요 없음. 생략시 0 
	MyStruct B = { "S","Striker",183.2,78.3};

	//구조체 배열 
	//맨 바깥 {}안에 ,로 연결된 {}들 넣기
	MyStruct C[2] = {
		{"A","A",1.1,1.1},
		{"B","B",2.2,2.2}
	};
	//구조체 배열의 요소에 접근
	cout << C[0].height << endl;
	return 0;
}
