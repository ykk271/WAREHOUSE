#include <iostream>
#include "My_Constant.h"
using namespace std;

/*
int g_x; // external linkage
static int g_x; // internal linkage
const int g_x; // X

�ٸ� cpp���Ͽ� ���������� ���� ��
extern int g_z;
extern const int g_z;

int g_y(1);
static int g_y(1);
const int g_y(1);

�ٸ� cpp���Ϸ� ���� ����
extern int g_w(1);
���, �ٸ� cpp���Ϸ� ���� ����
extern const int g_w(1);
*/





int value = 123;

int a = 1;

static int g_a = 1; // �ٸ� cpp���Ͽ����� ���� �Ұ�

//forward declaration
extern void Do2(); 
extern void Do3();
extern int c;


void Do()
{
	//static int a = 1; //�����Ҵ� 
	//�ʱ�ȭ 1���ۿ� ����
	//a�� ������ �ʱ�ȭ �ž���
	//�Լ��� ��� ȣ��ƴ��� ��� �� ����
	++a;
	cout << a << endl;
}


int main()
{
	cout << value << endl;
	
	int value = 1;

	cout << ::value << endl;
	cout << value << endl;

	Do();
	Do();
	Do();
	Do();

	Do2();

	cout << c << endl;

	cout << "In Main.cpp" << Constants::pi << " "<<
		&Constants::pi  <<endl;
	//�޸𸮳���..
	//extern���� �ϸ� �޸� ���� ����

	Do3();

	return 0;
}

