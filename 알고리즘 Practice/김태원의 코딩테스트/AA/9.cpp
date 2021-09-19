#include <iostream>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int a;
	cin >> a;
	int cnt[50001] = { 0, };

	int i, j;

	for (i = 1; i <= a; ++i)
	{
		for (j = i; j <= a; j += i)
		{
			cnt[j]++;
		}
	}

	for (i = 1; i <= a; ++i)
	{
		cout << cnt[i] << " ";
	}


	return 0;
}