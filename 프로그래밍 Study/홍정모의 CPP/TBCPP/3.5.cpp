#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a = 100 - 99.9999;
	double b = 10 - 9.9999;

	double absilon = 10e-10;
	
	


	cout << abs(a - b) << endl;

	return 0;
}