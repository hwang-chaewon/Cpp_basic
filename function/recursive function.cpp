#include <iostream>
using namespace std;
void countDown(int);
int main() {
	/*
	����Լ�
	���ȣ��: �ڱ� �ڽ� ȣ��
	if�� ������ true�� �ѿ� ��� �ڱ� �ڽ� �Լ��� ������
	if�� ������ false�� �Ǵ� �������� if�� ���� ������ ����
		���ȣ�� �� Ƚ����ŭ �Ųٷ� �Ž����ö󰡸鼭 ����
	*/
	countDown(5);

	return 0;
}

void countDown(int n) {
	cout << "counting..." << n << endl;
	if (n > 0)
		countDown(n - 1);
	cout << n << "��° ����Լ�" << endl;
}