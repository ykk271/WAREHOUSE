#include <iostream>

using namespace std;

void Do(int y)
{
	cout << "In Func " << y <<" "<< &y << endl;
}

int main()
{
	Do(5);

	int x = 6;

	cout << "In Main " << x<< " " << &x << endl;

	Do(x);
	Do(x + 1);

	return 0;
}