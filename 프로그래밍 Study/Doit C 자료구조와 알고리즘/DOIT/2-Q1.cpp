#include <iostream>

using namespace std;

int minof(const int a[], int n)
{
	int i;
	int min = a[0];
	for (i = 1; i < n; i++)
		if (a[i] < min) min = a[i];
	return min;
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

	cout << "�ּҰ��� " << minof(height, number) << " �Դϴ�.";

	delete height;

	return 0;
}