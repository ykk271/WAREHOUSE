#include <iostream>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	cin >> N;

	int count = 0;
	int tmp;
	for (int i = 1; i <= N; i++)
	{
		tmp = i;
		while (tmp > 0)
		{
			count++;
			tmp /= 10;
		}
	}

	cout << count;

	return 0;
}