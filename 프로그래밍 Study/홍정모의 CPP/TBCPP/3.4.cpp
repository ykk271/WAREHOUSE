#include <iostream>

int main()
{
	using namespace std;

	int a; // int memory size: 4 byte
	

	sizeof(float);
	int k = sizeof(a); // ¥‹¿ß: byte

	cout << sizeof(k) << endl;

	int x = 1;
	int y = 10;
	int z = (++x, ++y);
		
	//++x;
	//++y;
	//int z = y;

	cout << x << " " << y << " " << z << endl;


	//conditional operator(arithmetric if)
	bool onSale = true;

	int price;

	if (onSale)
		price = 10;
	else
		price = 100;

	cout << price << endl;

	//

	const int price2 = (onSale == false) ? 10 : 100;

	cout << price2 << endl;


	int number = 5;

	cout << ((x % 2 == 0) ? "even" : "odd" ) << endl;


	return 0;
}