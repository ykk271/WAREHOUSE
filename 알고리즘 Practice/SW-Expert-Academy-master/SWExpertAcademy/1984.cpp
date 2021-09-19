#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<int> result(T);

	
	vector<int> a(10);
	double sum = 0.0;

	for (test_case = 0; test_case < T; ++test_case)
	{
		

		for (int i = 0; i < 10; i++)
		{
			cin >> a[i];
		}

		sort(a.begin(), a.end());

		for (int i = 1; i < 9; i++)
		{
			sum += a[i];
		}

		result[test_case] = round(sum/8);

		sum = 0;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << result[i] << endl;
	}

	return 0;
}