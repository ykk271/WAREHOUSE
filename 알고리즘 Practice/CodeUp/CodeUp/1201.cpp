#include <iostream>	

using namespace std;

int main()
{
	int a; 

	cin >> a;

	if (a > 0)
		cout << "양수";
	else if (a < 0)
		cout << "음수";
	else
		cout << 0;

	return 0;
}