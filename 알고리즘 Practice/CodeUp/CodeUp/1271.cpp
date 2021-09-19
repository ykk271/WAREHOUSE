#include <iostream>	

using namespace std;

int main()
{
	int N, tmp, i;
	int max = -2147000000;
	cin >> N;

	for (i = 0; i < N; ++i)
	{
		cin >> tmp;

		if (tmp > max)
			max = tmp;
	}

	cout << max;


	return 0;
}