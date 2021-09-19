#include <iostream>
#include "Monster.h"
using namespace std;

int main()
{
	Monster mon1("Sanson", Position2D(0, 0));
	//mon1.m_location;

	Monster mon1("Balrok", Position2D(0, 0));
	//mon1.m_location;

	cout << mon1 << endl;
	
	//while (1)
	{
		mon1.moveTo(Position2D(1,1));

		cout << mon1 << endl;
	}

	return 0;
}