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
	int cnt = 1;
	string str;

	if (N < 3)
	{
		cout << 0;
		return 0;
	}

	if (N == 3)
	{
		cout << cnt;
		return 0;
	}

	for (int i = 4; i <= N; ++i)
	{
		str = to_string(i);
		for (int j = 0; j < str.size(); ++j)
		{
			if (str[j] == '3')
				cnt++;
		}

	}


	cout << cnt;


	return 0;
}