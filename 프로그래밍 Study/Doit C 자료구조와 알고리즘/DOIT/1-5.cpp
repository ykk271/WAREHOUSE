#include <iostream>
#include <math.h>

int sumof(int a, int b);

int main(void)
{
	using namespace std;

	int i, n;
	int sum;

	cin >> n;

	sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	cout << sum << endl;


	cout << "==============" << endl;

	
	//Q7
	sum = 0;

	for (i = 1; i <= n; i++)
	{
		sum += i;

		if (i != n)
			cout << i << "+ ";
		else
			cout << i;
	}

	cout << " = "<< sum << endl;

	//Q8
	sum = 0;
	i = 1;
	sum = (n + i) * n / 2;
	cout << sum << endl;

	//Q9
	int a, b;
	cin >> a;
	cin >> b;

	cout << sumof(a, b) << endl;


	return 0;
}

int sumof(int a, int b)
{
	using namespace std;

	int i, n;
	int sum;
	n = abs(a - b) + 1;

	if (a <= b)
		i = a;
	else
		i = b;

	sum = (n + i) * n / 2;

	return sum;
}