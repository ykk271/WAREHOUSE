#include <iostream>	
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;

	double max = -2147000000;

	if (a + b >= max)
		max = a + b;
	if (a - b >= max)
		max = a - b;
	if (b - a >= max)
		max = b - a;
	if (a * b >= max)
		max = a * b;
	if (b != 0 && a / b >= max)
		max = a / b;
	if (a != 0 && b / a >= max)
		max = b / a;
	if (pow(a, b) >= max)
		max = pow(a, b);
	if (pow(b, a) >= max)
		max = pow(b, a);

	cout<<fixed;
	cout.precision(6);
	cout << max;

	return 0;
}