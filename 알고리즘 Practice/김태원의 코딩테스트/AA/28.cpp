#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	cin >> N;
	int j, tmp;
	int cnt2 = 0;
	int cnt5 = 0;

	for (int i = 2; i <= N; ++i)
	{
		tmp = i;

		j = 2;

		while (1)
		{
			

			if (tmp % j == 0)
			{
				tmp /= j;

				if (j == 2)
					cnt2++;
				else if (j == 5)
					cnt5++;
			}
			else j++;

			if (tmp == 1)
				break;
		}

	}


	if (cnt2 > cnt5)
		cout << cnt5;
	else
		cout << cnt2;
	


	return 0;
}