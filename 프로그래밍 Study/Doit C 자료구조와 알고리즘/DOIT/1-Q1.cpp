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

	cout << "4개의 수를 입력하세요: ";
	cin >> a >> b >> c >> d;
	cout << "max값: " << max4(a, b, c, d);

	return 0;
}