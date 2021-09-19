//세 정수 값을 입력하고 최대값을 구합니다.

#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	int max;

	cout << "세 정수의 최대값을 구합니다." << endl;
	cout << "a 값: "; cin >> a;
	cout << "b 값: "; cin >> b;
	cout << "c 값: "; cin >> c;

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "최대값은: " << max;

	return 0;
}