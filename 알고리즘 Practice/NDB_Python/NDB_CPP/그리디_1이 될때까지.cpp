#include <iostream>

using namespace std;

int main()
{

	int n = 25;
	int k = 3;
	int cnt = 0;
	while (n > 1)
	{		
		if (n % k == 0)
		{
			n = n / k;
			cnt++;
		}
		else 
		{
			n--;
			cnt++;
		}	
					
	}

	cout << cnt << endl;


	return 0;
}