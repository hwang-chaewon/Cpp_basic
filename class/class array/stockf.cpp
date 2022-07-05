#include "Stock.h"

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}
/*
하나의 멤버 함수가 두 개의 객체를 동시에 처리해야 하는 경우
두 개의 클래스를 받아서 그중 share_val이 높은 클래스를 반환한다
*/
//앞의 Stock은 호출한 주체이고 Stock s는 매개변수로 넣어준 객체
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this;//여기서 this는 포인터 변수기 때문에 앞에 *를 붙여준다.
}



Stock::Stock(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock()
{
	
}

#include "Stock.h"

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
}
Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this;
}



Stock::Stock(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock()
{
	
}