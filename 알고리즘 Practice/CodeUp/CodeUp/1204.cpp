#include <iostream>	

using namespace std;

int main()
{
	int a;
	cin >> a;

	int b, c;

	b = a / 10; 
	c = a % 10;

	if (b == 1)
		cout << a << "th";
	else if (c == 1)
		cout << a << "st";
	else if (c == 2)
		cout << a << "nd";
	else if (c == 3)
		cout << a << "rd";
	else
		cout << a << "th";

	return 0;
}