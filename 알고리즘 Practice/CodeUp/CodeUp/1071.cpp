#include <iostream>

using namespace std;

int main()
{
	int a;
	Re:
	cin >> a;
	
	if (a != 0)
	{
		cout << a << endl;
		goto Re;
	}

	return 0;
}
