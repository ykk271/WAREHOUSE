#include <iostream>	

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a % 2 == 0)
		cout << "礎熱";
	else
		cout << "?汝?";

	cout << "+";

	if (b % 2 == 0)
		cout << "礎熱";
	else
		cout << "?汝?";

	cout << "=";

	if ((a+b) % 2 == 0)
		cout << "礎熱";
	else
		cout << "?汝?";
	
	return 0;
}