#include <iostream>

using namespace std;


int min3(int a, int b, int c)
{
	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	return min;
}

int main()
{
	int a, b, c;

	cout << "3개의 수를 입력하세요: ";
	cin >> a >> b >> c;
	cout << "min값: " << min3(a, b, c);

	return 0;
}