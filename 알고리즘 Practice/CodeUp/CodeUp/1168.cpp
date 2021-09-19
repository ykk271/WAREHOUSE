#include <iostream>	

using namespace std;

int main()
{

	char a[6];
	int b, i, c;

	for (i = 0; i < 6; ++i)
	{
		cin >> a[i];
	}

	cin >> b;

	c = (a[0] - 48) * 10 + a[1] - 48;

	if (b < 3)
		cout << 2012 - (1900 + c) + 1;
	else
		cout << 2012 - (2000 + c) + 1;

	return 0;
}