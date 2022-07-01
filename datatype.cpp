#include <iostream>
#include <climits>
using namespace std;

int main() {
	/*
	������ 4��
	: short, int, long, long long
	*/
	//�� �ڷ����� ������ �� �ִ� �ִ� ũ�⸦ ��Ÿ���� �� ���(predefined)�� ����
	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	cout << "int�� " << sizeof n_int << "����Ʈ�̴�." << endl;
	cout << "�� ����Ʈ�� �ִ밪�� " << n_int << "�̴�." << endl;

	/*
	unsigned�� �ڷ��� �տ� �ٰ� �ȴٸ� ���� ���� ����X
	-->������ �� �ִ� ��� ������ �þ
	*/
	unsigned int a;

	/*
	�Ǽ���
	float
	*/

	/*
	������ char: ���� ������
		'ª��'�������� �ƴ϶� '����'�������� ����
		: C++������ �ƽ�Ű �ڵ尡 �־�, ���ڸ��� �����Ǵ� ���� ����
		  �ƽ�Ű �ڵ忡 �ش�Ǿ� ���ڷ� ġȯ�� �� �ִ� ���ڴ� �ƽ�Ű �ڵ�� �ٷ� �� ����
	*/
	//���� ����
	int aa = 77;
	char b= aa;
	cout <<"������ ���� aa�� char������ ����ϸ�: " << b << endl;
	//���� ���ڸ� ����
	/*
	C++������ char���� ""(ū����ǥ)�� ����� �� ����. ''(��������ǥ)�� ����
		: " "���� null����('/0')�� ���ԵǾ� �ֱ� ������ �� ������ ���ڸ� ����Ǵ� char���� ������ ����
	*/
	char bb = 'a';
	cout << "char�� ���� bb�� ����ϸ�: " << bb << endl;

	/*
	bool: 0(false, 0) Ȥ�� 1(true, 0�̿��� ��� ��)
	*/
	bool a_ = 0;
	bool b_ = 10;
	cout << "bool�� ���� a_�� " << a_ << endl;
	cout << "bool�� ���� b_�� " << b_ << endl;

	return 0;
}
