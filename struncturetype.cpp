#include <iostream>
using namespace std;
int main() {
	/*
	����ü
	����ü: �ٸ� ���������� ���Ǵ� �������� ����
	����� ���Ƿ� ���ο� ���������� ����� ��
	����ü ������ ��������ó�� ����� 
		C.F.�迭: ���� ���������� ����
	����ü ����: structure Ű����
	����ü�� ��� ����: {}�� ��� ����
		{}�ȿ����� ;�� ��� ��
	*/
	struct MyStruct 
	{
		string name;
		string position;
		float height;
		float weight;
	};

	//����ü�� ���� ����� ���(1): ��� �̿�
	MyStruct A;
	A.name = "Choi";
	A.height = 187.5;
	//����ü�� ���� ����� ���(2): {,}
	//��� ��� ���� ���� �ʿ� ����. ������ 0 
	MyStruct B = { "S","Striker",183.2,78.3};

	//����ü �迭 
	//�� �ٱ� {}�ȿ� ,�� ����� {}�� �ֱ�
	MyStruct C[2] = {
		{"A","A",1.1,1.1},
		{"B","B",2.2,2.2}
	};
	//����ü �迭�� ��ҿ� ����
	cout << C[0].height << endl;
	return 0;
}