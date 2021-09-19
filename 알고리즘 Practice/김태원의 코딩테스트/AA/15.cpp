#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	int cnt = 0;
	bool flag;
	int i,j;
	cin >> N;

	for (i = 2; i <= N; i++)
	{
		flag = true;

		for (j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				flag = false;
				break;
			}				

		}

		if (flag) cnt++;
	}



	cout << cnt;

	return 0;
}