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


	string str;
	int str_size;
	int isTrue = 1;
	int i;
	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> str;

		str_size = str.size();

		if (str_size % 2 == 0)
		{
			for (i = 0; i <= str_size / 2 - 1; i++)
			{
				if (str[i] != str[str_size - 1 - i])
					isTrue = 0;
			}
		}
		else if (str_size % 2 != 0)
		{			
			for (i = 0; i < str_size / 2; i++)
			{
				if (str[i] != str[str_size - 1 - i])
					isTrue = 0;
			}
		}		

		
		

		//for (i = 0; i <= str_size / 2 - 1; i++)
		//{
		//	if (str[i] != str[str_size - 1 - i])
		//		isTrue = 0;
		//}

		//01233210
		//0123210
		

		result[test_case] = isTrue;
		isTrue = 1;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << result[i] << endl;
	}

	return 0;
}