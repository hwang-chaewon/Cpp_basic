#include <iostream>
#define SIZE 20
using namespace std;
int main() {

	//char���� �迭�� ���ڿ��� �����ϰ��� �� ���� ũ�⸦ �̸� ������ �־�� ��
	char animal[SIZE];
	char* ps;

	cout << "���� �̸��� �Է��Ͻʽÿ�.";
	cin >> animal;

	/*
	new�����ڸ� ���� ����ڰ� �Է��ϴ� �ͺ��� �� ĭ �˳��� ���� ���������μ� �����ϱ� ����� ������ Ȯ��. 
	���� �ð��� �޸� ���� Ȯ��
	*/
	ps = new char[strlen(animal) + 1];
	//strcpy(a,b): b�� ���� a�� ����. ���� �� ������ ������ ����
	//strcpy_s(a,n,b): b�� ���� ũ�Ⱑ n�� a�� ����
		//C++���� ps�� ũ�⸦ �˾Ƴ��� ���� ���� �ϴ� strlen(animal) + 1�� �״�� ������ ��
	strcpy_s(ps, strlen(animal) + 1,animal);

	cout << "�Է��Ͻ� ���� �̸��� �����߽��ϴ�" << endl;
	cout << "�Է��Ͻ� ���� �̸��� " << animal << "�̰�, �� �ּҴ� " << (int*)animal << "�Դϴ�." << endl;
	cout << "����� ���� �̸��� " << ps << "�̰�, �� �ּҴ� " << (int*)ps << " �Դϴ�." << endl;

	return 0;
}