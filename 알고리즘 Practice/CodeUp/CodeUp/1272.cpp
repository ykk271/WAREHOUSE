#include <iostream>	

using namespace std;

int main()
{
	int k, h;
	int sum = 0;

	cin >> k >> h;

	if (k % 2 == 1)
		sum += k - ((k - 1)/2);
	else
		sum += 5 * k;

	if (h % 2 == 1)
		sum += h - ((h-1)/2);
	else
		sum += 5 * h;

	cout << sum;


	return 0;
}