#include <iostream>

using namespace std;

int main()
{
	char a;
	cin >> a;

	switch (a)
	{
	case'A':
		cout << "best!!!" << endl;
		break;
	case'B':
		cout << "good!!" << endl;
		break;
	case'C':
		cout << "run!" << endl;
		break;
	case'D':
		cout << "slowly~" << endl;
		break;
	default:
		cout << "what?" << endl;
	}

	return 0;
}