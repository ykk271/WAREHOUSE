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


	for (test_case = 0; test_case < T; ++test_case)
	{
		int N;
		int j;
		vector<int> result(12, 0);

		cin >> N;
		j = 2;

		while (1)
		{				
			if (N % j == 0)
			{
				result[j]++;

				N /= j;
				
			}
			else
				j++;

			if (N == 1)
				break;
				
		}


		cout << "#" << test_case + 1 << " ";
		for (int i = 0; i < 12; i++)
		{
			if (i == 2 || i == 3 || i == 5 || i == 7 || i == 11)
				cout << result[i] << " ";
			else
				continue;
		}
		cout << endl;

	}


	return 0;
}