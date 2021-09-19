#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	int i = 1;
	int sum = 0;
	while (true)
	{
		sum = sum + i;
		if (sum >= a) break;

		i++;

	}

	cout << sum << endl;

	return 0;
}
