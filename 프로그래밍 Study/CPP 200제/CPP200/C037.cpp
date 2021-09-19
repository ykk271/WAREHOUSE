#include <iostream>


using namespace std;

int main()
{
	int number = 3;

	switch (number)
	{
	case 1:
		cout << "number 값은 1" << endl;
		break;
	case 2:
		cout << "number 값은 2" << endl;
		break;
	case 3:
		cout << "number 값은 3" << endl;
		break;
	default:
		cout << "number 값은 알 수 없음" << endl;
		break;
	}

	return 0;
}