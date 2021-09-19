#include <iostream>
#include <string>
using namespace std;

int main()
{
	//syntax error
	//int x


	//semantic errors
	/*
	int x;
	cin >> x;
	if (x >= 5) cout << "x is greater than" << endl;
	*/

	//violated assumption
	//ix에 큰 수 넣으면 런타임애러 뜸
	string hello = "hello, my name is king";
	while (true)
	{
		int ix;
		cout << "Input from 0 to" << hello.size() - 1 << endl;

		cin >> ix;
		if (ix > 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}

	return 0;
}