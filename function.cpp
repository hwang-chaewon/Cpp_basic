#include <iostream>

using namespace std;

const float PIE = 3.14;
/*�Լ� ���� ǥ��*/
void cheers(int n);
float circle(int x);

int main() {
    /*�Լ�
    1. �Լ� ���� ����
    2. �Լ� ȣ��
    3. �Լ� ���� ����
        (������ �Լ��� ��� 1,3�� ���̺귯������ ����)
    main�Լ��� ���� �� �Լ� ������ ���� � ������ �Լ��� ���̰ڱ��� ������ ��, main���� ȣ���� �� ���� �� �Լ� ���Ƿ� ���� ������ �����ϰ� ���ϰ��� ������ ���� ��
    */
    int a;
    cout << "�ϳ��� ���� �Է��Ͻʽÿ�." << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "���� ������ ���̸� �Է��Ͻʽÿ�." << endl;
    cin >> b;
    float c = circle(b);
    cout << "���� ���̴� " << c << "�Դϴ�.";

    return 0;
}

/*�Լ� ����*/
//���ϰ� ���� void �Լ�-->return�� ���� ����
void cheers(int n) {
    for (int i = 0; i < n; i++)
        cout << "Cheers!" << endl;
}

float circle(int x) {
    return x * x * PIE;
}