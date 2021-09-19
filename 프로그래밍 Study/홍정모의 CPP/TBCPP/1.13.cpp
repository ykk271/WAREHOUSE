#include <iostream>

using namespace std;

namespace space1
{
	int DO(void)
	{
		cout << "KK" << endl;
		
		return 0;
	}


	namespace space2
	{
		int DO(void)
		{
			cout << "LL" << endl;

			return 0;
		}
	}
}

int DO(void)
{
	cout << "GG" << endl;

	return 0;
}

int main()
{
	cout << "Hellow World!" << endl;
	space1::DO();
	space1::space2::DO();
	DO();
	return 0;
}