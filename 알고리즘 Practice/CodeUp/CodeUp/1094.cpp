#include <iostream>
#include<array>

using namespace std;

int main()
{
	//int n;
	//cin >> n;

	int a[10000] = {};

	int n;
	cin >> n;
	
	int tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = n-1; i >= 0; i--)
	{
		cout << a[i] << " ";
	}


	return 0;
}
