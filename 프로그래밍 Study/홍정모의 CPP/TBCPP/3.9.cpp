#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	// bit flag
	/*	
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	//...	

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items = 0;

	cout << bitset<8>(items) << endl;

	//item3 on
	items |= opt3;

	cout << "Item 3 on " <<bitset<8>(items) << endl;

	//item3 lost
	items &= ~opt3;
	cout << "Item 3 lost " << bitset<8>(items) << endl;

	// has itme1?
	if (items & opt1)
		cout << "Has opt1" << endl;

	//optain item 2, 3
	items |= (opt2 | opt3);
	cout  << bitset<8>(items) << endl;

	if ((items & opt2) && !(items & opt1))
	{
		items ^= opt2;
		items ^= opt1;
	}

	cout << bitset<8>(items) << endl;
	*/

	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	//bit mask

	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;
	//
	unsigned char green = pixel_color & green_mask;

	unsigned char blue = pixel_color & blue_mask;

	cout << "blue" << bitset<8>(blue) << endl;

	cout << int(blue) << endl;

	cout << "green" << bitset<8>(green) << endl;

	cout << int(green) << endl;

	
	return 0;
}