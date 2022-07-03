#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int*, int);

int main() {

    /*
    arr는 배열이 아니라 포인터
    C++에서는 '배열의 이름'을, '그 배열 첫번째 원소의 주소'로 인식함
        arr==&arr[0]
    */
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    cout << "size of arr" << sizeof arr << endl;//배열 전체 크기
    int sum = sumArr(arr, SIZE);
    cout << "함수의 " << SIZE << "까지의 합은 " << sum << "입니다.\n";

    sum = sumArr(arr, 3);
    cout << "함수의 " << "세번째 인덱스 까지의 합은 " << sum << "입니다.\n";

    return 0;
}

int sumArr(int* arr, int n) {
    int total = 0;
    cout << "size of arr" << sizeof arr << endl;//int *arr로 받았으므로 배열의 첫번째 원소의 크기
    for (int i = 0; i < n; i++)
        total += arr[i];//[]는 배열이름이든, 포인터든 사용 가능

    return total;
}