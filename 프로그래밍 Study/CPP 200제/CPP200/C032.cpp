#include <iostream>
using namespace std;

int main() {
	int num1 = 100;
	int num2 = 6;

	if (num1 < num2)
		cout << "num2가 큼" << endl;
	else if (num1 > num2)
		cout << "num1이 큼" << endl;
	else
		cout << "num1 = num2 " << endl;

	if (num2 < 7)
	{
		if (num2 > 3)
		{
			if (num2 == 4)
				cout << "num2 = 4" << endl;
			else if (num2 == 5)
				cout << "num2 = 5" << endl;
			else
				cout << "num2 = 6" << endl;
		}
		else
		{
			if (num2 == 3)
				cout << "num2 = 3 " << endl;
			else if (num2 == 2)
				cout << "num2 = 2 " << endl;
			else
				cout << "num2 <= 1" << endl;
		}
	}

	return 0;
}