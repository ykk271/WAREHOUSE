#include <iostream>	
#include <math.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b <= c)
		cout << "�ﰢ���ƴ�";
	else if (a == b && a == c)
		cout << "���ﰢ��";
	else if (a == b || b == c || c == a)
		cout << "�̵�ﰢ��";
	else if (pow(c, 2) == pow(a, 2) + pow(b, 2))
		cout << "�����ﰢ��";
	else
		cout << "�ﰢ��";	



	return 0;
}