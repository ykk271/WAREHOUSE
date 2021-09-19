#include <iostream>

using namespace std;

int digit_sum(int x)
{
	int A = 0;

	A = A + x % 10;

	for (int i = 1; i <= 7; ++i)
	{
		A = A + floor(x / pow(10, i)) - floor(x / pow(10,i+1)) * 10;		
	}

	return A;
}

int main()
{
	//freopen("input.txt", "r", stdin);

	int a;
	int b[101];
	int c[101];
	int i;

	int max = -2147000000;
	int index = 1;

	cin >> a;

	for (i = 1; i <= a; ++i)
	{
		cin >> b[i];

		c[i] = digit_sum(b[i]);

		if (c[i] > max)
		{
			max = c[i];
			index = i;
		}
		else if (c[i] == max && b[i] > b[index])
		{
			index = i;
		}

	}

	cout << b[index];

	return 0;
}