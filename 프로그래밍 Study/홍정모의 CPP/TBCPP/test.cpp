#include <iostream>
#include "My_Constant.h"

extern int c = 1;

void Do2()
{
	using namespace std;
	cout << "Hello" << endl;
	

}


void Do3()
{
	using namespace std;


	cout << "In test.cpp" << Constants::pi << " " <<
		&Constants::pi << endl;
}

