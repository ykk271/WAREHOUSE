#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	unsigned int s = std::numeric_limits<unsigned int>::max();

	cout << s << endl;
	cout << s + 1 << endl;

	unsigned int i = -1;

	cout << i << endl;

	int a = 23 / 4;

	cout << a << endl;
	cout <<(float)a << endl;



	return 0;

}