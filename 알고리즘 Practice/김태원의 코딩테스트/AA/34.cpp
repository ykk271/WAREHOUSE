#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

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


	for (int i = 0; i < N; ++i)
	{
		for (int j = 1; j < N - i; ++j)
		{
			if (a[j] < a[j - 1])
			{
				swap(a[j], a[j - 1]);
			}
		}
	}




	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}

	return 0;
}