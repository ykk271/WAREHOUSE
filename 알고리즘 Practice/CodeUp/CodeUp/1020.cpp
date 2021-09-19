#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int main() {
	int a;
	int b;

	scanf("%d-%d", &a, &b);
	cout.width(6);
	cout.fill('0');
	cout << a;
	cout.width(7);
	cout.fill('0');
	cout << b;

	return 0;

}