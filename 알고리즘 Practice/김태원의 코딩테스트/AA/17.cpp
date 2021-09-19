#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	int a, b;
	cin >> N;
	int sum = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> a >> b;
		sum = 0;
		for (int j = 1; j <= a; j++)
		{
			sum += j;
		}

		if (sum == b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	


	return 0;
}