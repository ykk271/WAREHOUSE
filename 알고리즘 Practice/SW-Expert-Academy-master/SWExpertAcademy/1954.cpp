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
	int i, j;
	int n;
	bool first;
	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N;
		n = 1;
		first = true;
		vector<vector<int>> v(N, vector<int>(N, 0));

		for (i = 0; i < N; ++i)
		{
			v[0][i] = n;
			n++;
		}

		for (i = N - 1; i > 0; i--)
		{
			if (first)
			{
				for (j = 0; j < N; ++j)
				{
					//v[i][
				}
			   
			}
			else
			{

			}
		}



		cout << "#" << test_case + 1 << endl;
		for (i = 0; i < N; ++i)
		{
			for (j = 0; j < N; ++j)
			{
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}


	return 0;
}