#include <iostream>

using namespace std;

double aveof(const int a[], int n)
{
	int i;
	double average = 0;

	for (i = 0; i < n; i++)
		average += a[i];

	average /= n;

	return average;
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

	cout << "����� " << aveof(height, number) << " �Դϴ�.";

	delete height;

	return 0;
}