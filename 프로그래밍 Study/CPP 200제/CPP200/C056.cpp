#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string silla = "divided into the Three Kingdoms";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";
	
	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

	cout << silla << endl;
	cout << joseon << endl;



	return 0;
}