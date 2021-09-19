#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int main() {
	int a;
	int b;
	int c;

	scanf("%d.%d.%d", &a, &b, &c);
	
	cout.width(4);
	cout.fill('0');
	cout << a;
	cout << ".";
	cout.width(2);
	cout.fill('0');
	cout << b;
	cout << ".";
	cout.width(2);
	cout.fill('0');
	cout << c;
	

	return 0;
}
