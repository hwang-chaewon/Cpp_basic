#include <iostream>
using namespace std;
const int SIZE = 30;
int main() {
	cout << "������ �Է��Ͻʽÿ�.\n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "�Է��Ͻ� ������\n";
	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];
		if (line[i] == ' ')
			continue;
		spaces++;
	}
	cout << "�Դϴ�.\n";
	cout << "�Է��Ͻ� ���忡�� ������ ������ ���ڼ��� " << spaces << " �� �Դϴ�.";
	return 0;
}