#include <iostream>


using namespace std;

int main()
{
	double x = 5.7;
	int div1 = static_cast<int>(x / 5);
	double mod1 = x - 5 * div1;

	cout << "5.7/5 = ¸ò: " << div1 << ", ³ª¸ÓÁö: " << mod1 << endl;




	return 0;
}