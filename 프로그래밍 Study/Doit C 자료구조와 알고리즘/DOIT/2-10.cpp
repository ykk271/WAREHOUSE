#include <iostream>

using namespace std;

int main()
{
	int i, n;
	int prime[500];
	int ptr = 0;
	unsigned long count = 0;
	prime[ptr++] = 2;
	for (n = 3; n <= 1000; n += 2)
	{
		for (i = 1; i < ptr; i++)
		{
			count++;
			if (n % prime[i] == 0)
				break;
		}
		if (ptr == i)
			prime[ptr++] = n;
	}

	for (i = 0; i < ptr; i++)
		cout << prime[i] << endl;

	cout << "나누셈을 실행한 회수: " << count;

	return 0;
}