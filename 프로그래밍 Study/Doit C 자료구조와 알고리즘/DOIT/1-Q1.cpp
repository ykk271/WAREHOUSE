#include <iostream>

using namespace std;


int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;
	if (d > max) max = d;

	return max;
}

int main()
{
	int a, b, c, d;

	cout << "4���� ���� �Է��ϼ���: ";
	cin >> a >> b >> c >> d;
	cout << "max��: " << max4(a, b, c, d);

	return 0;
}