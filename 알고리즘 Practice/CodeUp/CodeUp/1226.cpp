#include <iostream>	

using namespace std;

int main()
{
	int a[8];
	int b[7];

	int count = 0;
	int i, j;

	for (i = 1; i <= 7; ++i)
		cin >> a[i];

	for (i = 1; i <= 6; ++i)
		cin >> b[i];


	for (i = 1; i <= 6; ++i)
	{
		for (j = 1; j <= 6; ++j)
		{
			if (b[j] == a[i])
				count++;
		}
	}

	if (count == 5)
	{
		for (j = 1; j <= 6; ++j)
		{
			if (b[j] == a[7])
			{
				cout << 2;
				return 0;
			}
		}
		cout << 3;
	}
	else if (count == 6)
		cout << 1;
	else if (count == 4)
		cout << 4;
	else if (count == 3)
		cout << 5;
	else
		cout << 0;


	return 0;
}