#include <iostream>

using namespace std;

int main()
{
	int* x = new int;

	if (x == NULL)
	{
		cout << "�޸� �Ҵ翡 �����߽��ϴ�.";
	}
	else
	{
		*x = 57;
		cout << "*x = " << *x;
	}

	delete x;



	return 0;
}