#include <iostream>

using namespace std;

int main()
{
	int a[19][19] = {};

	for (int i = 0; i < 19; ++i)
		for (int j = 0; j < 19; ++j)
			cin >> a[i][j];

	int n, x, y;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;

		for (int j = 0; j < 19; ++j)
		{
			if (a[x - 1][j] == 0) a[x - 1][j] = 1;
			else a[x - 1][j] = 0;
		}

		for (int j = 0; j < 19; ++j)
		{
			if (a[j][y - 1] == 0) a[j][y - 1] = 1;
			else a[j][y - 1] = 0;
		}

	}

	for (int i = 0; i < 19; ++i)
	{
		for (int j = 0; j < 19; ++j)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}