#include <iostream>

using namespace std;

int main(void)
{
	int i, n;
	int sum;

	cout << "1부터 n까지의 합을 구합니다." << endl;
	do {
		cout << "n의 값: ";
		cin >> n;
	} while (n <= 0);

	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << "1부터 n까지의 합: " << n << endl;

	return 0;
}