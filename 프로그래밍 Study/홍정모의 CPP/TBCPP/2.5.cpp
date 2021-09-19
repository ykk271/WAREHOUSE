#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main()
{
	float f;
	double d = 12321351126.45754;
	long double ld;

	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(ld) << endl;

	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;

	cout << std::setprecision(17);
	cout << d << endl;
	
	double z = 0;
	double p = 5.0 / z;
	
	cout << p << endl;
	cout << std::isinf(p) << endl;

	return 0;

}