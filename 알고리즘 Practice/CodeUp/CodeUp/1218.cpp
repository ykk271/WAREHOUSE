#include <iostream>	
#include <math.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b <= c)
		cout << "»ï°¢Çü¾Æ´Ô";
	else if (a == b && a == c)
		cout << "Á¤»ï°¢Çü";
	else if (a == b || b == c || c == a)
		cout << "ÀÌµîº¯»ï°¢Çü";
	else if (pow(c, 2) == pow(a, 2) + pow(b, 2))
		cout << "Á÷°¢»ï°¢Çü";
	else
		cout << "»ï°¢Çü";	



	return 0;
}