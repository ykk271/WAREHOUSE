#include <iostream>

using namespace std;

int main() {
	long long int a;
	long long int b;

	cin >> a >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

	double c = (double)a / (double)b;
	
	cout << fixed;
	cout.precision(2);
	cout << c << endl;


	return 0;


}