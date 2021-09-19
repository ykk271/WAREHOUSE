#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<int> result(T);

	string str;
	int i, j, len;
	bool s;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> str;
		
		for (i = 1; i <= 10; ++i)
		{
			s = true;
			for (j = 0; j < (30 - (30%i) - i); ++j)
			{
				if (str[j] != str[j + i])
					s = false;
			}
			if (s)
				break;
		}


		result[test_case] = i;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << result[i] << endl;
	}

	return 0;
}