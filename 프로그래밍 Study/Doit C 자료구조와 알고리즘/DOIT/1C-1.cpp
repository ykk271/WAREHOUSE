#include <iostream>

using namespace std;

int med3(int a, int b, int c)
{
	
	if (a >= b)
		if (b >= c)
			return b;
		else if (a <= c)
			return a;
		else
			return c;
	else if (a > c)
		return a;
	else if (b > c)
		return c;
	else
		return b;

}

int med3_2(int a, int b, int c)
{
	if ((b >= a && c <= a) || (b <= a && c >= a))
		return a;
	else if ((a > b && c < b) || (a<b && c> b))
		return b;
	else
		return c;
}


int main(void)
{
	int a, b, c;

	cin >> a >> b >> c;

	cout << "�߾Ӱ���" << med3(a, b, c) << "�Դϴ�.";

	cin >> a >> b >> c;

	cout << "�߾Ӱ���" << med3_2(a, b, c) << "�Դϴ�."

	return 0;
}