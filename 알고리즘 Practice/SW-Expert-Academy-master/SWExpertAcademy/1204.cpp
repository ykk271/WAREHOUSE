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

	int tmp;
	int maxCnt;
	int many;


	vector<int> a(101);
	int tmp2;
	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> tmp;

		vector<int> a(101);
		many = 0;
		maxCnt = 0;
		
		for (int i = 0; i < 1000; i++)
		{
			cin >> tmp;

			a[tmp]++;
		}

		for (int i = 0; i < 101; ++i)
		{
			if (a[i] >= maxCnt)
			{
				maxCnt = a[i];

				if(i >= many)
				many = i;
			}
		}


		cout << "#" << test_case + 1 << " " << many << endl;
	}


	return 0;
}