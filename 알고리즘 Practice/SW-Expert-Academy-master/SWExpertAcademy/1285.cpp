#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int main(int argc, char** argv)
{
	//freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	int N;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N;
		vector<int> a(N);

		for (int i = 0; i < N; ++i)
		{
			cin >> a[i];
		}

		int min = 100000;
		int cnt = 0;

		for (int i = 0; i < N; ++i)
		{
			if (abs(a[i]) < min)
			{
				min = abs(a[i]);
			}
		}

		for (int i = 0; i < N; ++i)
		{
			if (abs(a[i]) == min)
				cnt++;
		}


		cout << "#" << test_case + 1 << " " << min << " " << cnt << endl;
	}


	return 0;
}