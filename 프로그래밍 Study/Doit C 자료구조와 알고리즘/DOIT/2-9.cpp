#include <iostream>

using namespace std;

int main()
{
	int i, n;
	unsigned long counter = 0;
	for (n = 2; n <= 1000; ++n)
	{
		for (i = 2; i < n; ++i)
		{
			counter++;
			if (n % i == 0)
				break;
		}
		
		if (n == i)
			cout << n << endl;
	}
	cout << "³ª´©¼ÀÀ» ½ÇÇàÇÑ È½¼ö : " << counter;


	return 0;
}