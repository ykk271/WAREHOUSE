#include <iostream>	

using namespace std;

int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int e = a + b + c + d;

	if (e == 1)
		cout << "µµ";
	else if (e == 2)
		cout << "°³";
	else if (e == 3)
		cout << "°É";
	else if (e == 4)
		cout << "À·";
	else
		cout << "¸ð";

	return 0;
}