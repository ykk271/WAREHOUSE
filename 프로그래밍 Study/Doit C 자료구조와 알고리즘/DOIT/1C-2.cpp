#include <iostream>

using namespace std;

int main(void)
{
	int no;
	cout << "2의 정수를 입력하세요" << endl;
	do {
		cout << "입력한 수: ";
		cin >> no;		
	} while (no < 10 || no > 99);
	
	cout << "입력된 변수 값은: " << no << endl;

	return 0;
}