#include <iostream>	

using namespace std;

int main()
{
	int a;
	int b, c, d;
	cin >> a;

	b = a / 10;
	c = a % 10;
	d = (c * 10 + b) * 2;

	if (d > 100)
		d = d - (d / 100)*100;

	cout << d << endl;
	if (d <= 50)
		cout << "GOOD";
	else
		cout << "OH MY GOD";



	return 0;
}