#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	//switch()�ȿ� ���� �� �ݵ�� ����
	switch (a) {
	case 1:
		cout << "1�� �Է��ϼ̽��ϴ�";
		break;
	case 2:
		cout << "2�� �Է��ϼ̽��ϴ�";
		break;
	default:
		cout << "1,2���� �ٸ� ���� �Է��ϼ̽��ϴ�";
		break;
	}
	return 0;
}