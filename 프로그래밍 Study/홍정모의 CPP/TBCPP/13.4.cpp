#include <iostream>
#include "Storage.h"

using namespace std;

//template<typename T>
//T getMax(T x, T y)
//{
//	return (x > y) ? x : y;
//}
//
//template<>
//char getMax(char x, char y)
//{	
//	cout << "Warning : comparing chars" << endl;
//	return (x > y) ? x : y;
//}


int main()
{
	//cout << getMax<double>(1, 2) << endl;
	//cout << getMax('b' , 'c') << endl;

	Storage<int> nValue(5);
	Storage<double> dValue(5.6);

	nValue.print();
	dValue.print();

	return 0;
}