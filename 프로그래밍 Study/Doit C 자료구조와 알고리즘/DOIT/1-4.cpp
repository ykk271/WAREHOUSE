#include <iostream>	

using namespace std;

int main(void)
{
	int i, n;
	int sum;

	cout << "1부터 n까지의 합을 구합니다" << endl;
	cout << "n의 값: ";
	cin >> n;

	sum = 0;
	i = 1;

	while (i <= n)
	{
		sum = sum + i;
		i++;
	}

	cout << "답: " << sum << endl;

	return 0;
}