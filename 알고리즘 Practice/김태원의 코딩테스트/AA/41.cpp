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

	int sum;
	int startPoint;
	int i, j;
	bool isTrue;
	int resCnt = 0;
	for (i = N - 1; i > 0; --i)
	{
		
		isTrue = false;
		sum = 0;
		j = i;
		while (1)
		{			
			sum += j;

			if (sum > N) break;
			else if (sum == N)
			{
				isTrue = true;
				resCnt++;
				break;

			}
			else j++;
		}

		if (isTrue)
		{
			for (int k = i; k <= j; ++k)
			{
				if (k < j)
					cout << k << " + ";
				else
					cout << k;
			}
			cout << " = " << N << endl;
			
		}
	}
	cout << resCnt;


	return 0;
}