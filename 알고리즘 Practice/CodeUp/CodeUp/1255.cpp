#include <iostream>	

using namespace std;

int main()
{
	double a, b;
	double i = 0.00;

	cin >> a >> b;
	

	while (a + i <= b)
	{
		cout << fixed;
		cout.precision(2);
		cout << a + i << " ";
		i += 0.01;
	
	}

	return 0;
}