#include <iostream>	

using namespace std;

int main()
{
	int a, b, i;

	cin >> a >> b;

	if (b >= a)
	{
		for (i = a; i <= b; ++i)
		{
			cout << i << " ";
		}
	}
	else
	{
		for (i = b; i <= a; ++i)
		{
			cout << i << " ";
		}
	}
	

	return 0;
}