#include <iostream>	
#include <cmath>

using namespace std;

int main()
{
	double tmp;
	int b;
	double c;
	cin >> tmp >> b;

	double* a = new double[b+1];

	a[0] = tmp;
	for (int i = 1; i <= b; ++i)
	{
		cin >> c;
		c = 1 + c / 100;
		a[i] = a[i - 1] * c;
	}

	double temp = round(a[b] - a[0]);

	cout << temp << endl;

	if (temp > 0)
		cout << "good";
	else if (temp == 0)
		cout << "same";
	else
		cout << "bad";


	delete[] a;

	return 0;
}