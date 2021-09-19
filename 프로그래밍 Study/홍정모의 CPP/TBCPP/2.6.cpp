#include <iostream>

bool isEqual(int a, int b)
{
	bool result = (a == b);

	return result;
}


int main()
{
	using namespace std;

	bool b1 = true;
	bool b2(false);
	bool b3{ true };

	cout << std::boolalpha;
	cout << b1 << b2 << b3 << endl;
	cout << !b1 << endl;

	cout << (true && false) << endl;
	cout << (true || false) << endl;
	cout << "================" << endl;

	if (true)
		cout << "This is true" << endl;

	cout << isEqual(1, 3) << endl;

	cout << "================" << endl;

	if (5)
	{
		cout << "True" << endl;
	}
	else
		cout << "False" << endl;

	bool b;

	cin >> b;

	cout << "your input: " << b << endl;

	cout << 10 % 2 << endl;



	return 0;

}