#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;


bool vector_equal(vector<int>& v)
{
	vector<int> ref = { 1,2,3,4,5,6,7,8,9 };

	sort(v.begin(), v.end());

	for (int i = 0; i < 9; ++i)
	{
		if (v[i] != ref[i])
			return false;
	}

	return true;
}

bool squre(int x, int y, int a[][9])
{
	vector<int> tem(9);
	int i, j;
	int count = 0;

	for (i = 0 + x; i < 3 + x; i++)
	{
		for (j = 0 + y; j < 3 + y; j++)
		{
			tem[count] = a[i][j];
			count++;
		}
	}

	if (!vector_equal(tem))
	{
		return false;
	}

	return true;
}



int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;
	int i, j;	
	int x, y;

	cin >> T;

	

	for (test_case = 0; test_case < T; ++test_case)
	{
		vector<int> tem(9);

		int a[9][9];
		int isTrue = 1;	

		for (i = 0; i < 9; i++)
		{
			for (j = 0; j < 9; j++)
			{
				cin >> a[i][j];
			}
		}

		//가로축 검사
		for (i = 0; i < 9; ++i)
		{
			for (j = 0; j < 9; ++j)
			{
				tem[j] = a[i][j];
			}
			if (!vector_equal(tem))
			{
				isTrue = 0;
				break;
			}
		}

		//세로축 검사
		for (i = 0; i < 9; ++i)
		{
			for (j = 0; j < 9; ++j)
			{
				tem[j] = a[j][i];
			}
			if (!vector_equal(tem))
			{
				isTrue = 0;
				break;
			}
		}

		//사각형 검사
		for (i = 0; i <= 6; i = i + 3)
		{
			for (j = 0; j <= 6; j = j + 3)
			{
				if (!squre(j, i, a))
					isTrue = 0;
			}
		}

		cout << "#" << test_case + 1 << " " << isTrue << endl;

	}



	return 0;
}