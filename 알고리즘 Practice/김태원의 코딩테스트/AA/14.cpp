#include <iostream>
#include <vector>
#include <string>

using namespace std;


int reverse(int x)
{
	int rev = 0;
	int tmp;
	while (x > 0)
	{
		tmp = x % 10;
		rev = (rev * 10) + tmp;

		x /= 10;
	}

	return rev;
}

bool intPrime(int x)
{
	bool Prime = true;

	if (x == 1) return false;

	for (int i = 2; i < x; ++i)
	{
		if (x % i == 0)
		{
			Prime = false;
			break;
		}
	}

	return Prime;
}


int main()
{
	//freopen("input.txt", "r", stdin);

	int T;
	cin >> T;
	int N;
	int rev;
	for (int i = 0; i < T; ++i)
	{
		
		cin >> N;
		rev = reverse(N);
		if (intPrime(rev))
		{
			cout << rev << " ";
		}
	}

	return 0;
}