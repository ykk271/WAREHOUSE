#include <iostream>	

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a % 2 == 0)
		cout << "Â¦¼ö";
	else
		cout << "È¦¼ö";

	cout << "+";

	if (b % 2 == 0)
		cout << "Â¦¼ö";
	else
		cout << "È¦¼ö";

	cout << "=";

	if ((a+b) % 2 == 0)
		cout << "Â¦¼ö";
	else
		cout << "È¦¼ö";
	
	return 0;
}