#include <iostream>

using namespace std;

int main() {
	long long int a;
	long long int b;
	long long int c;

	cin >> a >> b >> c;

	cout << a + b + c << endl;

	double d = ((double)a + (double)b + (double)c) / 3;

	cout << fixed;
	cout.precision(1);
	cout << d;

	return 0;
	
}