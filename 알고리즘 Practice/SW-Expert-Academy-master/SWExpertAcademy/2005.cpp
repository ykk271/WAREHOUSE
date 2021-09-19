#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
	//freopen("input.txt", "r", stdin);

	int T, N;
	cin >> T;

	int array[11][11] = { 0 };
	int i, j;
	
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			array[i][j] = 1;
		}
	}

	for (i = 3; i <= 10; i++)
	{
		for (j = 2; j <= i - 1; j++)
		{
			array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
	}
		

	for (int k = 0; k < T; ++k)
	{		
		cin >> N;

		cout << "#" << k + 1 << endl;

		for (i = 1; i <= N; i++)
		{
			for (j = 1; j <= i; j++)
			{
				cout << array[i][j] << " ";
			}
			cout << endl;
		}

	}

	return 0;
}