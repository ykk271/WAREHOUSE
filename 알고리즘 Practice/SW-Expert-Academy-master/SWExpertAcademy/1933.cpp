#include<iostream>
#include <vector>
using namespace std;

int main(int argc, char** argv)
{
	int number;
	cin >> number;

	int count = 0;

	int tmp;

	vector<int> result(number + 1);

	for (int i = 1; i <= number; ++i)
	{
		tmp = number % i;

		if (tmp == 0)
		{
			result[count] = i;
			count++;
		}

	}

	for (int i = 0; i < count; ++i)
	{
		cout << result[i] << " ";
	}

	return 0;
}