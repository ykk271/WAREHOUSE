#include<iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;

	cout << oct << a << " ";
	cout.setf(ios::uppercase);
	cout.setf(ios::hex, ios::basefield);
	cout << hex << a;

	return 0;
}