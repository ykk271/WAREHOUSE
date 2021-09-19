#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int a, b;

	cin >> a;

	for (int i = 0; i < n-1; i++)
	{
		cin >> b;

		if (b < a)
		{
			a = b;
		}
			
	}
	cout << a;


	return 0;
}