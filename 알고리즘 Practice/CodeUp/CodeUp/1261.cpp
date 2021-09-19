#include <iostream>	

using namespace std;

int main()
{
	int a[10];
	int count = 0;
	int tmp;
	for (int i = 0; i < 10; ++i)
	{
		cin >> a[i];
		
		if (a[i] % 5 == 0)
		{
			tmp = a[i];
			count++;
		}
			
	}	

	if (count != 0)
		cout << tmp;
	else
		cout << 0;

	return 0;
}