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
	char AL;
	int cnt;
	int num;
	


	for (test_case = 0; test_case < T; ++test_case)
	{
		cout << "#" << test_case + 1 << endl;

		cin >> N;

		cnt = 0;

		for (int i = 1; i <= N; ++i)
		{
			cin >> AL;
			cin >> num;
			for (int j = 1; j <= num; ++j)
			{
				cout << AL;
				cnt++;

				if (cnt == 10)
				{
					cout << endl;
					cnt = 0;
				}
			}
		}

		cout << endl;

		
	}


	return 0;
}