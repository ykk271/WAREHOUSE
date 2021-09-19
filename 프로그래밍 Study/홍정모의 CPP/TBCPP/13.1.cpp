#include <iostream>
#include "Cents.h"
using namespace std;

//template<class T_NAME>
template<typename T_NAME>
T_NAME getMax(T_NAME x, T_NAME y)
{
	return (x > y) ? x : y;
}

int main()
{

	cout << getMax(1, 2) << endl;
	cout << getMax(3.14, 1.5) << endl;
	cout << getMax(1.0f, 2.2f) << endl;
	cout << getMax('z', 'c') << endl;

	cout << getMax(Cents(5), Cents(9)) << endl;

	return 0;
}