#include <iostream>

using namespace std;

int min4(int a, int b, int c, int d)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;
	if (d < min) min = d;

	return min;
}

int main()
{
	int a, b, c, d;

	cout << "4개의 수를 입력하세요: ";
	cin >> a >> b >> c >> d;
	cout << "min값: " << min4(a, b, c, d);

	return 0;
}