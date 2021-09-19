#include <iostream>
	
using namespace std;

int main() {
	int num1 = 100;
	int num2 = 200;
	int num3 = 300;

	if (num1 > num2 && num1 > num3)
		cout << "가장 큰 수: num1 " << endl;
	else if (num2 > num1 && num2 > num3)
		cout << "가장 큰 수: num2 " << endl;
	else if (num3 > num1 && num3 > num2)
		cout << "가장 큰 수: num3" << endl;
	else
		cout << "찾을 수 없음." << endl;

	return 0;
}