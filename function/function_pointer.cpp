#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int*, int*);

int main() {

    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
    int sum = sumArr(arr,arr+ SIZE);
    cout << "함수의 " << SIZE << "까지의 합은 " << sum << "입니다.\n";

    sum = sumArr(arr, arr+3);
    cout << "함수의 " << "세번째 인덱스 까지의 합은 " << sum << "입니다.\n";

    return 0;
}

//배열의 시작 주소와 베열의 끝 주소를 알려주기
int sumArr(int* begin, int* end) {
    int total = 0;
    int* pt;

    for (pt = begin; pt != end; pt++)
        total += *pt;

    return total;
}