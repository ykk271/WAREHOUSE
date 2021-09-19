#include <iostream>	

using namespace std;

int main()
{
	int a, b;
	char c;

	cin >> a >> c >> b;

	switch (c)
	{
	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;

	case '*':
		cout << a * b;
		break;

	case '/':
	{
		double _a = (double)a;
		double _b = (double)b;
		cout << fixed;
		cout.precision(2);
		cout << _a / _b;
		break;
	}
		

	}

	return 0;
}