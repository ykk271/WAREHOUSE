#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//시간복잡도 어떻게 줄이지???

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	int cnt = 1;
	cin >> N;

	vector<int> a(N);
	
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	cout << "1 ";

	for (int i = 1; i < N; ++i)
	{
		cnt = 1;
		for (int j = 0; j < i; ++j)
		{
			if (a[j] >= a[i])
			{
				cnt++;
			}
		}
		cout << cnt << " ";

			
	}




	return 0;
}