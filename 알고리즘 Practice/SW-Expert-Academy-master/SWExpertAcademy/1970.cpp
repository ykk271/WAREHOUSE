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
	
	int N;
	
	for (test_case = 0; test_case < T; ++test_case)
	{
		std::vector<int> won(8, 0);
		cin >> N;

		won[0] = N / 50000;
		N = N % 50000;
		won[1] = N / 10000;
		N = N % 10000;
		won[2] = N / 5000;
		N = N % 5000;
		won[3] = N / 1000;
		N = N % 1000;
		won[4] = N / 500;
		N = N % 500;
		won[5] = N / 100;
		N = N % 100;
		won[6] = N / 50;
		N = N % 50;
		won[7] = N / 10;
		N = N % 10;
		


		cout << "#" << test_case + 1 << endl;
		for (int j = 0; j < 8; ++j)
		{
			cout << won[j] << " ";
		}	
		cout << endl;

	}


	return 0;
}