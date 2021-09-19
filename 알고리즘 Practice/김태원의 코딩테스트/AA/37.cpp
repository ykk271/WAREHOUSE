#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	
	//freopen("input.txt", "r", stdin);

	int S, N;
	cin >> S >> N;
	vector<int> a(S);
	int b;
	int tmp;
	bool hit;
	int i, j, k;
	int pos = 0;

	for (i = 0; i < N; ++i)
	{
		cin >> b;

		hit = false;

		for (j = 0; j < S; ++j)
		{
			if (a[j] == b)
			{
				hit = true;
				break;
			}
		}

		if (hit)
		{
			tmp = a[j];
			for (k = j; k >= 1; --k)
			{
				a[k] = a[k - 1];
			}
			a[0] = tmp;
		}

		else
		{
			for (k = S -1; k >= 1; --k)
			{
				a[k] = a[k - 1];
			}

			a[0] = b;			
		}

	}

	for (int i = 0; i < S; ++i)
	{
		cout << a[i] << " ";
	}


	return 0;
}