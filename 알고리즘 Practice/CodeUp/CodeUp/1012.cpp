#include <iostream>

using namespace std;

int main() {
	float x;
	cout.precision(7);
	cout.setf(ios::showpoint);
	cin >> x;
	cout << x;

	return 0;
}