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
	vector<int> v(N);
	bool flag;
	int cnt = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> v[i];
	}

	for (int i = 0 ; i < N -1; ++i)
	{
		flag = true;
		for (int j = i + 1; j < N; ++j)
		{
			if (v[i] <= v[j])
			{
				flag = false;
				break;
			}				
		}

		if (flag)
		{
			cnt++;
		}
			
	}

	cout << cnt;

	return 0;
}