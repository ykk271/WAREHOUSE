#include <iostream>

using namespace std;

int main(void)
{
	int no;
	cout << "2�� ������ �Է��ϼ���" << endl;
	do {
		cout << "�Է��� ��: ";
		cin >> no;		
	} while (no < 10 || no > 99);
	
	cout << "�Էµ� ���� ����: " << no << endl;

	return 0;
}