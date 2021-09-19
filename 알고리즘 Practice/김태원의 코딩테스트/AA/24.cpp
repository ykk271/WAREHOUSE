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
	vector <int> a(N);
	vector <int> b(N - 1);
	bool isTrue = true;
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];

		if (i == 0)
			continue;
		else
			b[i - 1] = abs(a[i] - a[i-1]);
	}

	sort(b.begin(), b.end());

	for (int i = 0; i < N - 1; ++i)
	{
		if (b[i] != i + 1)
		{
			isTrue = false;
				break;
		}
	}


	if (isTrue)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}