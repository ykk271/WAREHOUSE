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

	cout << "사람 수: ";
	cin >> number;

	height = new int[number];
	cout << number << "명의 사람의 키를 입력하세요." << endl;
	for (i = 0; i < number; ++i)
	{
		cout << "height[" << i << "]: ";
		cin >> height[i];
	}

	cout << "평균은 " << aveof(height, number) << " 입니다.";

	delete height;

	return 0;
}