#include <iostream>
#include "Stock.h"
/*
추상화와 클래스
클래스
	추상화를 사용자 정의 데이터형으로 변환해주는 수단
	1.클래스 선언
	2.클래스 메서드 정의
추상화
	어떤 객체를 사실적으로 표현하는 게 아니라, 
	공통된 특징을 간결한 방식으로, 이해하기 쉽게 표현하는 것
*/
int main() {

	Stock temp;
	temp.acquire("Panda", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;

}