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
		cout << "년: "; cin >> year;
		cout << "월: ";	cin >> month;
		cout << "일: "; cin >> day;
		cout << year << "년의 " << dayofyear(year, month, day) << "일째입니다." << endl;
		cout << "다시? (예: 1): ";
		cin >> retry;
	} while (retry == 1);

	return 0;
}