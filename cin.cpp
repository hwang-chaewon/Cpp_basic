#include <iostream>
using namespace std;
int main() {
	const int Size=15;
	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "�ȳ��ϼ���, ���� " << name2 << "�Դϴ�. ����� �̸���? " << endl;
	
	// >>: �Է¹��� ���� >>�����ʿ� �����ϰڴٴ� �帧�� ��Ÿ��
	/*
	cin: string��ü�� Ű���� �Է��� ������ �� ����. ������ �Է��� ������ �ν���
	cin.getline(�Է¹��� ����,������ �ִ� ũ��): ������� �����Ͽ� �Է¹���
	cin.get(,): cin.getline(,)�� ����
	*/
	cin.getline(name1,Size) >> name1;
	cout << name1 << "��, " << strlen(name1) << "���� �̸��� " << Size << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�." << endl;
	cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���." << endl;
	cout << "�� �̸��� ù���ڴ� " << name2[0] << "�̶��ϴ�." << endl;

	return 0;
}