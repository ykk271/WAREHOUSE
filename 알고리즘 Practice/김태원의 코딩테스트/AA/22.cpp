#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N, K;
	cin >> N >> K;
	int max;
	int sum = 0;
	vector<int> a(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < K; ++i)
	{
		sum += a[i];
	}
	max = sum;

	for (int i = K; i < N; ++i)
	{		
		sum = sum + a[i] - a[i - K];
		if (sum > max)
			max = sum;
	}

	cout << max;

	return 0;
}