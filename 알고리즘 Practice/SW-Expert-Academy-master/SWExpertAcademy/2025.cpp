#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int sum = 0;
	int input;
	cin >> input;

	for (int i = 1; i <= input; ++i)
	{
		sum = sum + i;
	}

	cout << sum;

	return 0;
}