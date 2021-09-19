#include <iostream>
#include<array>

using namespace std;

int main()
{
	//int n;
	//cin >> n;

	int a[10000] = {};
	int b[23] = {};

	int n;
	int tmp;
	int num;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		a[i] = tmp;
	}

	for (int j = 0; j < n; j++)
	{
			num = a[j] - 1;
			b[num] ++;
	}

	for (int k = 0; k < 23; k++)
	{
		cout << b[k] << " ";
	}

	return 0;
}
