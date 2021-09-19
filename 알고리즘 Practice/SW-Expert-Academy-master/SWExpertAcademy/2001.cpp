#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	//freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<int> result(T);

	int max = 0;
	int tmp = 0;
	int N , M;
	int i, j;
	int k, l;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N >> M;

		int** a = new int* [N];
		for (i = 0; i < N; ++i)
			a[i] = new int[N];

		for (i = 0; i < N; ++i)
		{
			for (j = 0; j < N; ++j)
				cin >> a[i][j];
		}

		for (i = 0; i < N - M + 1; ++i)
		{
			for (j = 0; j < N - M + 1; ++j)
			{
				for (int k = i; k < i+M; ++k)
				{
					for (int l = j; l < j+M; ++l)
					{
						tmp += a[k][l];
					}
				}

				if (tmp >= max)
					max = tmp;

				tmp = 0;
			}
			tmp = 0;
		}


		result[test_case] = max;
		
		delete[] a;
		tmp = 0;
		max = 0;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << result[i] << endl;
	}

	return 0;
}