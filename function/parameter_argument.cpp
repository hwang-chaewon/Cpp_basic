#include <iostream>

using namespace std;

void helloCPP(int, int);

int main() {

    int times, times2;
    cout << "������ �Է��Ͻʽÿ�. \n";
    cin >> times;
    cout << "������ �ѹ� �� �Է��Ͻʽÿ�. \n";
    cin >> times2;
    helloCPP(times, times2);//times, times2: argument

    return 0;
}

void helloCPP(int n, int m) {//int n,m: parameter
    for (int i = 0; i < n; i++)
        cout << "Hello\n";

    for (int i = 0; i < n; i++)
        cout << "C++\n";
}