#include<iostream>

using namespace std;

void doSomething(int &n)
{
	n = 10; // const�� ������ ������
	cout << "In doSomeThing" << n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};


int main()
{
	int value = 5;
	
	
	int* ptr = nullptr;
	ptr = &value;
	
	//ref�� �ݵ�� �ʱ�ȭ �Ǿ�� �Ѵ�
	//literal�� ����
	//const�� ����
	int& ref = value;
		
	
	ref = 10; //*ptr = 10;

	cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;


	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;
	cout << ref1 << endl;
	ref1 = value2;
	cout << ref1 << endl;

	//�ּ� �����ϱ� ������ �Լ������� ���� �ٲ� �� ����
	int n = 5;
	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	cout << n << endl;

	int arr[5] = { 1, 2, 3, 4, 5 };


	Other ot;
	//���� ���ϱ� �ٷ�� �����
	//ot.st.v1 = 1.0;
	//�Ʒ�ó�� ����
	int& v1 = ot.st.v1;
	v1 = 1;

	int V = 5;	
	//�Ʒ� �ΰ� ��� ����
	int* const P = &V;
	int& R = V;

	return 0;
}