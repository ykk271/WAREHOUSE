#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);

	int N;
	cin >> N;
	int tmp;
	int i, j;
	vector<int> a(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	for (i = 1; i < N; ++i)
	{
		tmp = a[i];
		for (j = i - 1; j >= 0; --j)
		{
			if (a[j] > tmp)
			{
				a[j + 1] = a[j];
			}
			else
				break;
		}

		a[j + 1] = tmp;
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}