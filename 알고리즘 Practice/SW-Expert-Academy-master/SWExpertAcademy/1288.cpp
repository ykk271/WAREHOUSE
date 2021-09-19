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
	int cnt = 1;

	int i;
	int j;
	bool full;
	string str;

	int tmp;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N;

		i = 1;

		tmp = N;

		vector <int> number(10, 0);

		while (1)
		{	

			full = true;

			str = to_string(N);

			for (int i = 0; i < str.size(); ++i)
			{
				number[str[i] - 48]++;

			}
			

			for (int i = 0; i < 10; ++i)
			{
				if (number[i] == 0)
				{
					full = false;
					break;
				}
			}

			
			if (full)
			{
				break;
			}

			i++;
			N = tmp * i;


		}


		cout << "#" << test_case + 1 << " " << N << endl;
	}


	return 0;
}