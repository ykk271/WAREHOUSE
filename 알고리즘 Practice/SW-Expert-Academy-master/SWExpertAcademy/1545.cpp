#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	std::vector<double> result(T + 1, 0);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		for (int i = 0; i < 10; ++i)
		{
			vector<int> arr(10);
			cin >> arr[i];

			if (arr[i] % 2 == 1)
				result[test_case] += arr[i];
		}

	}

	for (int i = 1; i <= T; ++i)
	{
		cout << "#" << i << " " << result[i] << endl;
	}

	return 0;
}