#include <iostream> 

using namespace std;

const int SIZE = 8;
int sumArr(int*, int n = 1);//int n=1 로 default매개변수 설정
//default 매개변수 설정시, 오른쪽부터 default매개변수를 설정할 수 있음. 
    //(왼쪽이 default매개변수고 오른쪽은 일반 매개변수인 것: 불가능)

int main() {
    int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64 };
    int sum = sumArr(arr);

    cout << "함수의 총 합은 " << sum << "입니다." << endl;
    return 0;
}

int sumArr(int* arr, int n) {
    int total = 0;

    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}