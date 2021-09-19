#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	int sum = 1;

	cout << 1;

	for (int i = 2; i < a; ++i)
	{
		if (a % i == 0)
		{
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;

	return 0;
}