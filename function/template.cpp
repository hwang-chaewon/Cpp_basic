#include <iostream>

using namespace std;

/*
�Լ� ���ø�
�Լ� �Ϲ�ȭ ����
    ��ü�� ���������� ������ �� �ִ� �Ϲ������� �Լ� ����
*/

template <class Any>//Any: ���ø����� ����� ���� �̸�
//class��� typename�� �ᵵ ����
Any sum(Any, Any);
template <class Any>
Any sum(float, float);

int main() {
    int a = 3;
    int b = 4;
    //sum(Any,Any)�� ȣ���
    //���⼭ Any�� int
    cout << sum(a, b) << endl;

    float c = 3; 14;
    float d = 1.592;
    //sum(float,float)�� ȣ���
    cout << sum(c, d) << endl;

    return 0;
}

template<typename Any>
Any sum(Any a, Any b) {
    return a + b;
}

template<typename Any>
Any sum(float a, float b) {
    return a + b;
}
