#include <iostream>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main() {

    /*
    ���� ����ü: new�� ����� ������ ����ü
    �Ϲ� ����ü�� ��� ������: .
        ex: A.height
    ���� ����ü�� ��� ������: ->
    */
    MyStruct* temp = new MyStruct;

    //���� ����ü�� ��� ������ ->�� ����ϴ� ���
    cout << "����� �̸��� �Է��Ͻʽÿ�.\n";
    cin >> temp->name;

    //��ȣ�� . �����ڸ� ����ϴ� ���
    cout << "����� ���̸� �Է��Ͻʽÿ�.\n";
    cin >> (*temp).age;

    cout << "�ȳ��ϼ���! " << temp->name << "��!\n";
    cout << "����� " << temp->age << "�� �̱���!\n";

    //(Ȯ��X)new�� ����� �� �ݵ�� delete�� ������� ��
    delete temp;
    return 0;
}