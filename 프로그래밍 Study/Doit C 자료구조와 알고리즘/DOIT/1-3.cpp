#include <iostream>

using namespace std;

int main(void)
{
	int n;

	cout << "������ �Է��ϼ���.: ";
	cin >> n;

	if (n > 0)
		cout << "���";
	else if (n < 0)
		cout << "����";
	else
		cout << "0";


	return 0;
}