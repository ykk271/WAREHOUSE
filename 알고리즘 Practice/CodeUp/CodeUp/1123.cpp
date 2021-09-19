#include <iostream>	

using namespace std;

int main()
{
	double a;
	cin >> a;

	double b = 9.0 / 5.0;

	cout << fixed;
	cout.precision(3);
	cout << b * a + 32;

	return 0;
}