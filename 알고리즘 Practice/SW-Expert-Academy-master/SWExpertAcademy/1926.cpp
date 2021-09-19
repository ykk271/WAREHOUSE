#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	//freopen("input.txt", "r", stdin);

	int a;

	cin >> a;

	int b, c, d;
	bool s = false;


	for (int i = 1; i <= a; ++i)
	{
		b = i / 100;
		c = i / 10;
		d = i % 10;

		if (b == 3 || b == 6 || b == 9)
		{
			cout << "-";
			s = true;
		}

		if (c == 3 || c == 6 || c == 9)
		{
			cout << "-";
			s = true;
		}

		if (d == 3 || d == 6 || d == 9)
			cout << "-";
		else if (s == false)
		{
			cout << i;
		}		

		cout << " ";
		s = false;
	}

	return 0;
}