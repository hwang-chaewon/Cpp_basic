#include <iostream> 

using namespace std;

const int SIZE = 8;
int sumArr(int*, int n = 1);//int n=1 �� default�Ű����� ����
//default �Ű����� ������, �����ʺ��� default�Ű������� ������ �� ����. 
    //(������ default�Ű������� �������� �Ϲ� �Ű������� ��: �Ұ���)

int main() {
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
    int sum = sumArr(arr);

    cout << "�Լ��� �� ���� " << sum << "�Դϴ�." << endl;
    return 0;
}

int sumArr(int* arr, int n) {
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}