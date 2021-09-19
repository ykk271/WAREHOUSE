#include <iostream>	

using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;

	if (a > 0)
	{
		if (b >= 30)
			cout << a << " " << b - 30;
		else
			cout << a - 1 << " " << b + 30;
	}
	else
	{
		if (b >= 30)
			cout << a << " " << b - 30;
		else
			cout << 23 << " " << b + 30;
	}

	return 0;
}