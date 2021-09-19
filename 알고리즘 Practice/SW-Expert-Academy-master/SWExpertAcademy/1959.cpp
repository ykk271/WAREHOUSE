#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	int i, j;
	int a, b;

	int max;
	int sum = 0;

	for (test_case = 0; test_case < T; ++test_case)
	{
		max = -2147000000;
		cin >> a >> b;
		vector<int> A(a);
		vector<int>	B(b);

		for (i = 0; i < a; ++i)
		{
			cin >> A[i];
		}
		for (i = 0; i < b; ++i)
		{
			cin >> B[i];
		}

		if (a <= b)
		{
			for (i = 0; i < b - a + 1; ++i)
			{
				for (j = 0; j < a; ++j)
				{
					sum += A[j] * B[j+i];					
				}
				if (sum > max) max = sum;
				sum = 0;
			}
		}
		else if (a > b)
		{
			for (i = 0; i < a- b + 1; ++i)
			{
				for (j = 0; j < b; ++j)
				{
					sum += A[j + i] * B[j];
				}
				if (sum > max) max = sum;
				sum = 0;
			}
		}

		cout << "#" << test_case + 1 << " " << max << endl;
	}


	return 0;
}