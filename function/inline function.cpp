#include <iostream> 

using namespace std;
/*
�ζ��� �Լ�
�Ϲ����� �Լ� ȣ��:�Լ��� �ּҷ� jump�ϴ� ����
�����Ϸ��� �ζ��� �Լ� ȣ��: jump�� �ƴ�, �����ϴ� �Լ� �ڵ�� ��ü�ϴ� ��
    �ζ��� �Լ�: �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
*/
inline float square(float x) {
    return x * x;
}

int main() {
    int a = 5;
    cout << "�� ���� ���̰� " << a << "�� ���簢���� ���̴�?" << endl;
    float b = square(a);
    cout << b <<endl;

    return 0;
}