#include <iostream>	

using namespace std;

int main()
{
	int a;
	
	cin >> a;

	if (a > 13)
		cout << (2012 - a + 1) % 100 << " " << 1;
	else
		cout << (2012 - a + 1) % 100 << " " << 3;	

		

	return 0;
}