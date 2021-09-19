#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N, M;
	int a;
	cin >> N >> M;

	int time = 0;
	int maxTime = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> a;

		if (a > M)
		{
			time++;
			cout << time << endl;			
		}
		else
		{
			time = 0;			
		}
		if (time > maxTime)
			maxTime = time;
	}

	if (maxTime == 0)
		cout << -1;
	else
		cout << maxTime;


	return 0;
}