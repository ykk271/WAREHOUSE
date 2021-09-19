#include<iostream>
#include"MY_CONSTANT.h"
//#define PI 3.14

using namespace std;

int main()
{ 
	constexpr int my_const = 123;

	int number;
	cin >> number;

	const int special_number = number;

	cout << CONSTANT::PI << endl;

	return 0;
}