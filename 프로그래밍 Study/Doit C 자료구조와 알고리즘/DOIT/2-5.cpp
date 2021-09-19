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

	cout << "사람 수: ";
	cin >> number;

	height = new int[number];
	cout << number << "명의 사람의 키를 입력하세요." << endl;
	for (i = 0; i < number; ++i)
	{
		cout << "height[" << i << "]: ";
		cin >> height[i];
	}

	cout << "최대값은 " << maxof(height, number) << " 입니다.";
	
	delete height;


	return 0;
}