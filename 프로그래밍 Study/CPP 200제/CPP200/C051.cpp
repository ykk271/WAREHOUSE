#include <iostream>
#include  <time.h>

using namespace std;

int main()
{	
	time_t now = time(NULL);
	struct tm date;

	localtime_s(&date, &now);
	printf("���� ��¥�� %d�� %d�� %d�� �Դϴ�.\n", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday);


	return 0;
}