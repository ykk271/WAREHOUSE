#include <iostream>

using namespace std;

int max3(int a, int b, int c)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	return max;
}

int main(void)
{

	int a, b, c;

	cout << "3���� ���� �Է��ϼ���: ";
	cin >> a >> b >> c;
	cout << "max��: " << max(a, b, c);

	return 0;
}

