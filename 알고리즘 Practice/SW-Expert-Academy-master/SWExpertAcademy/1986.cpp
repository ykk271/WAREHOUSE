#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<int> result(T);

	int N;
	int sum = 0;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N;

		for (int i = 1; i <= N; ++i)
		{
			if (i % 2 == 0)
				sum -= i;
			else
				sum += i;
		}


		result[test_case] = sum;

		sum = 0;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << result[i] << endl;
	}

	return 0;
}