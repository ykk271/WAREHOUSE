#include <iostream>

using namespace std;

int maxof(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
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

	cout << "�ִ밪�� " << maxof(height, number) << " �Դϴ�.";
	
	delete height;


	return 0;
}