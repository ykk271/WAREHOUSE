#include <iostream>

using namespace std;

int mdays[][12] = 
{
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int isleap(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year == 0)
		return 1;
	else
		return 0;
}

int dayofyear(int y, int m, int d)
{
	int i;
	int days = d;
	for (i = 1; i < m; ++i)
	{
		days += mdays[isleap(y)][i - 1];		
	}
	return days;
}

int main()
{
	int year, month, day;
	int retry;

	do {
		cout << "��: "; cin >> year;
		cout << "��: ";	cin >> month;
		cout << "��: "; cin >> day;
		cout << year << "���� " << dayofyear(year, month, day) << "��°�Դϴ�." << endl;
		cout << "�ٽ�? (��: 1): ";
		cin >> retry;
	} while (retry == 1);

	return 0;
}