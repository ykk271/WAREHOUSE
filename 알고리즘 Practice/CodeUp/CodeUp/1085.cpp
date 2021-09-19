#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double h, b, c, s;
	cin >> h >> b >> c >> s;

	double MB;
	MB = (h * b * c * s) / 1024 / 1024 / 8;
	cout << fixed;
	cout.precision(1);
	cout << MB << " MB";



	return 0;
}
