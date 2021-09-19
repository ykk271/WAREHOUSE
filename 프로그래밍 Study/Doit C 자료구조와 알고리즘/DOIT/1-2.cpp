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

	cout << "3개의 수를 입력하세요: ";
	cin >> a >> b >> c;
	cout << "max값: " << max(a, b, c);

	return 0;
}

