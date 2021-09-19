#include <iostream>	

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;


	if (a >= b && a >= c)
	{
		if (b <= c)
			cout << b << " " << c << " " << a;
		else
			cout << c << " " << b << " " << a;
	}
	else if (b >= a && b >= c)
	{
		if (a <= c)
			cout << a << " " << c << " " << b;
		else
			cout << c << " " << a << " " << b;
	}
	else
	{
		if (a <= b)
			cout << a << " " << b << " " << c;
		else
			cout << b << " " << a << " " << c;
	}

	return 0;
}