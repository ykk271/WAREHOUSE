#include <iostream>

int main()
{
	using namespace std;

	std::int16_t i = 5;
	std::int8_t a = 65;

	cout << a << endl; //A

	std::int_fast8_t f = 5;
	std::int_least64_t l = 6;


	return 0;
}