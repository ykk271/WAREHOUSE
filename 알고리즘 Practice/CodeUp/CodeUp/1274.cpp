#include <iostream>	

using namespace std;

int main()
{
	int a, i;
	int count = 0;
	cin >> a;

	for (i = 1; i <= a; ++i)
	{
		if (a % i == 0)
			count++;
	}

	if (count == 2)
		cout << "prime";
	else
		cout << "not prime";

	

	return 0;
}