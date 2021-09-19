#include <iostream>	

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	double c;
	c = (a * b) / 2;

	cout << fixed;
	cout.precision(1);
	cout << c;

	return 0;
}