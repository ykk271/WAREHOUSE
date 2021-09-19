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

	std::vector<int> result(T);

	int N;
	int i, j, q, w;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N;

		vector<vector<int> > arr(N, vector<int>(N, 0));
		vector<vector<string> > result(N, vector<string>(3, ""));
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				cin >> arr[i][j];
			}
		}

		for (q = 0; q < N; ++q)
		{
			w = 0;
			for (i = 0; i < N; ++i)
			{
				result[q][w] += to_string(arr[N - 1 - i][q]);
			}

			w = 1;
			for (i = 0; i < N; ++i)
			{
				result[q][w] += to_string(arr[N - 1 - q][N - 1 - i]);
			}
			w = 2;
			for (i = 0; i < N; ++i)
			{
				result[q][w] += to_string(arr[i][N - 1 - q]);
			}
		}


		cout << "#" << test_case + 1 << endl;
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < 3; j++)
			{
				cout << result[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}