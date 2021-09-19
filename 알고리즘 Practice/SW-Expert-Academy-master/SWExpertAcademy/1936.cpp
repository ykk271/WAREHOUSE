#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int a, b;

	cin >> a >> b;

	if (a == 1 && b == 2)
		cout << "B";
	else if (a == 2 && b == 3)
		cout << "B";
	else if (a == 3 && b == 1)
		cout << "B";

	else if (a == 2 && b == 1)
		cout << "A";
	else if (a == 3 && b == 2)
		cout << "A";
	else if (a == 1 && b == 3)
		cout << "A";

	return 0;
}