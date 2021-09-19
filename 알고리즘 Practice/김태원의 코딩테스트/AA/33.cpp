#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	cin >> N;
	int min;
	int index;
	int tmp;
	int rank = 1;
	int score;
	vector<int> a(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N; ++i)
	{
		index = i;
		min = 2147000000;

		for (int j = i; j < N; ++j)
		{
			if (a[j] < min)
			{
				min = a[j];
				index = j;
			}
		}

		tmp = a[i];
		a[i] = min;
		a[index] = tmp;
	}

	for (int i = N-1; i >= 1; --i)
	{
		if (a[i - 1] < a[i])
		{
			rank++;
			score = a[i - 1];
		}


		if (rank == 3)
			break;
	}

	cout << score;


	return 0;
}