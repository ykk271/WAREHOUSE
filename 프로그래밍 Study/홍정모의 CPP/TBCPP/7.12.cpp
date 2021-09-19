#include <iostream>
#include <limits.h>
using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count > 0 )
	 countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

void Pibo(int a, int b)
{	

	if (a + b < INT_MAX && a + b >= 0)
	{
		if (a == 0)
			cout << 0 << endl;

		cout << a + b << endl;

		int tmp = a;
		a = b;
		b = tmp + b;

		Pibo(a, b);
	}
}


int main()
{
	//countDown(5);

	//cout << sumTo(10) << endl;

	Pibo(0, 1);	

	return 0;
}