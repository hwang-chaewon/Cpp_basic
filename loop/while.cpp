#include <iostream>
using namespace std;
int main() {
	/*
	while��
	while() ��ȣ �ȿ��� ���ǹ� �ϳ��� �� �� ����
	�ʱ�ȭ���� loop���� �������ְ�,
	�������� loop�ȿ� �������ִ� �� �ʿ�
	*/
	//for���� while���� ()���� ������ �ٸ��� �������� ���
	//�ٸ� for������ i������ ()�ȿ��� ��� �����ϱ� ������ i�� ���� ����
	string str = "Panda";
	int i = 0;
	while (str[i] != '\0') {
		cout << str[i] << endl;
		i++;
	}
	/*
	do while
	���ǹ��� ���̵� �����̵� ������ ó��1ȸ�� ���� ������ ����
	*/
	int j = 0;
	do {
		cout << j;
		j++;
	}while (false);
	return 0;
}