#include <iostream>

using namespace std;

int main()
{
	int* x = new int;

	if (x == NULL)
	{
		cout << "메모리 할당에 실패했습니다.";
	}
	else
	{
		*x = 57;
		cout << "*x = " << *x;
	}

	delete x;



	return 0;
}