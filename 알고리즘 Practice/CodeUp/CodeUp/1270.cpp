#include <iostream>	

using namespace std;

int main()
{
	int n, i;
	int count = 0;

	cin >> n;

	for (i = 1; i <= n; ++i)
	{
		if (i % 10 == 1)
			count++;
	}
		

	cout << count;
	
	return 0;
}