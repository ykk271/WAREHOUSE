#include <iostream>

using namespace std;

int main(void)
{
	int i, n;
	int sum;

	cout << "1���� n������ ���� ���մϴ�." << endl;
	do {
		cout << "n�� ��: ";
		cin >> n;
	} while (n <= 0);

	sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << "1���� n������ ��: " << n << endl;

	return 0;
}