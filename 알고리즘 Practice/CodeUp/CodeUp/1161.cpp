#include <iostream>	

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	if (a % 2 == 0)
		cout << "¦��";
	else
		cout << "Ȧ��";

	cout << "+";

	if (b % 2 == 0)
		cout << "¦��";
	else
		cout << "Ȧ��";

	cout << "=";

	if ((a+b) % 2 == 0)
		cout << "¦��";
	else
		cout << "Ȧ��";
	
	return 0;
}