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
	int i, j;
	int pos;

	vector<int> a(N + 1);
	vector<int> b(N + 1);

	for (int i = 1; i <= N; ++i)
	{
		cin >> a[i];
	}

	for (int i = N; i >= 1; --i)
	{	
		pos = i;

		for (int j = 1; j <= a[i]; ++j)
		{	
			b[pos] = b[pos+1];
			pos++;
		}

		b[pos] = i;

	}

	for (int i = 1; i <= N; ++i)
	{
		cout << b[i] << " ";
	}

	return 0;
}