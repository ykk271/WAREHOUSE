#include <iostream>	
#include <math.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	
	int k = 0;
	double tmp;
	
	while (true)
	{
		tmp = sqrt(n - k);
		if (tmp - floor(tmp) == 0)
			break;
		else
			k++;
	}		

	cout << k << " " << tmp;

	return 0;
}