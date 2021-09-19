#include <iostream>	

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a % 5 == 0)
		b += (90 - a) / 5;
	else
		b += (90 - a) / 5 + 1;

	if (b > c)
		cout << "win";
	else if (b == c)
		cout << "same";
	else if (b < c)
		cout << "lose";


	return 0;
}