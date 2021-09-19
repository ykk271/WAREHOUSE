#include <iostream>

using namespace std;

void Do(const int& x)
{
	cout << x << endl;
}

int main()
{
	int a = 1;
	Do(a);
	Do(1);
	Do(3 + 4);
	Do(a + 5);

	return 0;
}