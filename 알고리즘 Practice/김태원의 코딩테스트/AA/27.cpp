#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isPrime(int x)
{
	for (int i = 2; i * i < x; ++i)
	{
		if (x % i == 0)
			return false;
	}
	return true;

}

int main()
{
	//freopen("input.txt", "r", stdin);

	int N, i, tmp, j;
	cin >> N;

	vector<int> cnt(N+1, 0);

	for (i = 2; i <= N; ++i)
	{
		tmp = i;

		j = 2;
		while (1)
		{
			if (tmp % j == 0)
			{
				tmp /= j;
				cnt[j] ++;
			}
			else
			{
				j++;
			}

			if (tmp == 1) break;
		}
	}

	cout << N << "! = ";

	for (i = 0; i < N + 1; ++i)
	{
		if (cnt[i] != 0)
			cout << cnt[i] << " ";
	}


	return 0;
}