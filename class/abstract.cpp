#include <iostream>
#include "Stock.h"
/*
�߻�ȭ�� Ŭ����
Ŭ����
	�߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ����
	1.Ŭ���� ����
	2.Ŭ���� �޼��� ����
�߻�ȭ
	� ��ü�� ��������� ǥ���ϴ� �� �ƴ϶�, 
	����� Ư¡�� ������ �������, �����ϱ� ���� ǥ���ϴ� ��
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