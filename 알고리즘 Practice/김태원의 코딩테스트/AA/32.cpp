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

	vector<int> a(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	int min;
	int tmp;
	int index;

	for (int i = 0; i < N; ++i)
	{
		min = 2147000000;
		index = i;

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

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}



	return 0;
}