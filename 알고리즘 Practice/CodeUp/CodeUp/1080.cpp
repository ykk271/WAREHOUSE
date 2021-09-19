#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	int i = 0;
	int sum = 0;
	while (true)
	{
		i = i + 1;
		sum = 0;

		for (int j = 1; j <= i; j++)
			sum = sum + j;

		if (sum >= a)
			break;
	}

	cout << i << endl;

	return 0;
}
