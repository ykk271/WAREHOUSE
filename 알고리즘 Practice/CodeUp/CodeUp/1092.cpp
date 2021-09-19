#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int i = 1;

	int a_index;
	int b_index;
	int c_index;

	while (true)
	{
		if (i % a == 0)
			a_index = 1;
		else
			a_index = 0;

		if (i % b == 0)
			b_index = 1;
		else
			b_index = 0;

		if (i % c == 0)
			c_index = 1;
		else
			c_index = 0;

		if (a_index == 1 && b_index == 1 && c_index == 1)
			break;

		i++;
		
	}

	cout << i << endl;

	return 0;
}
