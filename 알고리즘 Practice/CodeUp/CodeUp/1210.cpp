#include <iostream>	

using namespace std;

int main()
{
	int a, b;
	
	cin >> a >> b;

	if (a + b < 4)
		cout << "angry";
	else if (a * b == 6)
		cout << "angry";
	else
		cout << "no angry";

	return 0;
}