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
	int cnt = 0;
	int max = 0;
	int a0;
	int a;
	cin >> a0;
	for (int i = 1; i < N; ++i)
	{
		cin >> a;
		
		if (a0 <= a)
		{
			cnt++;
		}
		else
			cnt = 0;

		if (cnt > max)
			max = cnt;

		a0 = a;
	}

		cout << max + 1;

	return 0;
}