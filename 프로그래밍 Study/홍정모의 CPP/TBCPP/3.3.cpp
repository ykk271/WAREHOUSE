#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	using namespace std;

	int x = 1;
	cout << add(x, ++x) << endl; // do not use
}