#include <iostream>
	
using namespace std;

int main() {
	int num1 = 100;
	int num2 = 200;
	int num3 = 300;

	if (num1 > num2 && num1 > num3)
		cout << "���� ū ��: num1 " << endl;
	else if (num2 > num1 && num2 > num3)
		cout << "���� ū ��: num2 " << endl;
	else if (num3 > num1 && num3 > num2)
		cout << "���� ū ��: num3" << endl;
	else
		cout << "ã�� �� ����." << endl;

	return 0;
}