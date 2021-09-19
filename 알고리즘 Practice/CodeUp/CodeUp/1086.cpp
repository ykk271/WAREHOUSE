#include <iostream>

using namespace std;

int main()
{
	double w, h, b;
	cin >> w >> h >> b;

	double MB;
	MB = (w * h * b) / 1024 / 1024 / 8;
	cout << fixed;
	cout.precision(2);
	cout << MB << " MB";

	return 0;
}
