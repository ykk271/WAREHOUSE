#include <iostream>

using namespace std;

int main(void)
{
	int i;
	int a[5] = { 1, 2, 3, 4, 5 };
	int na = sizeof(a) / sizeof(a[0]);

	cout << "�迭 a�� ��� ������ " << na << "�Դϴ�." << endl;

	for (i = 0; i < na; i++)
		cout << "a[" << i << "]" << " = " << a[i] << endl;
		
	return 0;
}