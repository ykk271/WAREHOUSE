#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{

	int test_case;
	int T;
	int N;
	int Last;
	long long sum;

	cin >> T;
	
	vector<int> a(1000001, 0);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		for (int i = 1; i <= N; ++i)
			cin >> a[i];

		sum = 0;
		Last = a[N];

		for (int i = N - 1; i >= 1; --i)
		{
			if (a[i] > Last)
				Last = a[i];
			else
				sum += Last - a[i];
		}

		cout << "#" << test_case << " " << sum << endl;
	}

	return 0;
}