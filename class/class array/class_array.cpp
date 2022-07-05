#include <iostream>
#include "Stock.h"

int main() {

	//클래스를 배열로 생성하기 위해서는 디폴트 생성자가 반드시 정의되어 있어야 함
	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 20, 1300),
		Stock("D", 20, 1400)
	};
	
	//인덱스처럼 배열의 원하는 요소로 함수 호출 가능
	s[0].show();
	Stock *first = &s[0];//첫번째 원소에 대한 포인터 지정. s[0]앞에 &가 붙는 이유는 포인터에는 주소값을 대입해 줘야 하므로
	for (int i = 1; i < 4; i++)//배열의 끝까지 반복문 돌기
		first = &first->topval(s[i]);

	first->show();

	return 0;
}
