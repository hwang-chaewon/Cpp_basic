#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int*, int);

int main() {

    /*
    arr�� �迭�� �ƴ϶� ������
    C++������ '�迭�� �̸�'��, '�� �迭 ù��° ������ �ּ�'�� �ν���
        arr==&arr[0]
    */
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    cout << "size of arr" << sizeof arr << endl;//�迭 ��ü ũ��
    int sum = sumArr(arr, SIZE);
    cout << "�Լ��� " << SIZE << "������ ���� " << sum << "�Դϴ�.\n";

    sum = sumArr(arr, 3);
    cout << "�Լ��� " << "����° �ε��� ������ ���� " << sum << "�Դϴ�.\n";

    return 0;
}

int sumArr(int* arr, int n) {
    int total = 0;
    cout << "size of arr" << sizeof arr << endl;//int *arr�� �޾����Ƿ� �迭�� ù��° ������ ũ��
    for (int i = 0; i < n; i++)
        total += arr[i];//[]�� �迭�̸��̵�, �����͵� ��� ����

    return total;
}