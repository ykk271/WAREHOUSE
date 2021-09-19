#include <iostream>	
#include <math.h>
using namespace std;

int main()
{
	int a;
	cin >> a;

	int i = 9;
	while (a / pow(10, i) < 1)
	{
		i--;		
	}

	cout << i + 1;

	return 0;
}