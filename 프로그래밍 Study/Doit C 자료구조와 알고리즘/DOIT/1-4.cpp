#include <iostream>	

using namespace std;

int main(void)
{
	int i, n;
	int sum;

	cout << "1���� n������ ���� ���մϴ�" << endl;
	cout << "n�� ��: ";
	cin >> n;

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum = sum + i;
		i++;
	}

	cout << "��: " << sum << endl;

	return 0;
}