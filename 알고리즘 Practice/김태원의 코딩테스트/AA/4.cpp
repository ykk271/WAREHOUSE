#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int N, a, max = -2147000000, min = 2147000000;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cin >> a;
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}

	cout << max - min;

	return 0;
}