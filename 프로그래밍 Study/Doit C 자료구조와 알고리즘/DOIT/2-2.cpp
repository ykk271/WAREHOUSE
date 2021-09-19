#include <iostream>

using namespace std;

int main(void)
{
	int i;
	int a[5] = { 1, 2, 3, 4, 5 };
	int na = sizeof(a) / sizeof(a[0]);

	cout << "배열 a의 요소 개수는 " << na << "입니다." << endl;

	for (i = 0; i < na; i++)
		cout << "a[" << i << "]" << " = " << a[i] << endl;
		
	return 0;
}