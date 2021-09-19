#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cout << "정수를 입력하세요.: ";
	cin >> n;

	if (n > 0)
		cout << "양수";
	else if (n < 0)
		cout << "음수";
	else
		cout << "0";


	return 0;
}