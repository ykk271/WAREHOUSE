#include <iostream>	

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int result = 0;
	for (int i = a; i <= b; ++i)
	{
		if (i % 2 == 0)
		{			
			cout << "-" << i;
			result -= i;
		}
		else if (i % 2 != 0)
		{	
			if (i != a)
			{
				cout << "+" << i;
			}
			else
				cout << i;

			result += i;
		}
	}
	cout << "=" <<result;

	return 0;
}