#include <iostream>	

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int result = 1;

	if (k > 0)
	{
		for (int i = 1; i <= k; ++i)
		{
			result *= n;
		}
	}
	else result = 1;


	cout << result;

	return 0;
}