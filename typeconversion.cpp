#include <iostream>
using namespace std;
/*
�������� ��ȯ
1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
3. �Լ��� �Ű������� ������ ��
*/

/*
���������� �������� ��ȯ
	typeName(����)
	(typeName)����
C++���� ���� �������� ��ȯ
	static_cast<typeName>(����)
*/

int main() {
	//�������� ��ȯ-1
	int a = 3.48189;
	cout << a << endl;

	//���������� �������� ��ȯ
	char ch = 'M';
	cout << (int)ch << endl;
	//C++ ���������� �������� ��ȯ
	cout << static_cast<int> (ch) << endl;

	return 0;
}