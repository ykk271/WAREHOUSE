#include <iostream>

using namespace std;

int sumof(const int a[], int n)
{
	int i;	
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];

	return sum;
}

int main()
{
	int i;
	int* height;
	int number;

	cout << "��� ��: ";
	cin >> number;

	height = new int[number];
	cout << number << "���� ����� Ű�� �Է��ϼ���." << endl;
	for (i = 0; i < number; ++i)
	{
		cout << "height[" << i << "]: ";
		cin >> height[i];
	}

	cout << "�հ�� " << sumof(height, number) << " �Դϴ�.";

	delete height;

	return 0;
}