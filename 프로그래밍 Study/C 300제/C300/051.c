#include<stdio.h>
#include<conio.h>

#define ENTER 13

void main(void)
{
	int ch;

	printf("�ƽ�Ű �ڵ�� ��ȯ�� Ű�� ��������...\n");
	printf("Enter Ű�� ������ ���α׷��� ����˴ϴ�. \n");

	do
	{
		ch = _getch();

		printf("����:(%c), �ƽ�Ű�ڵ� = (%d)\n", ch, ch);
	} while (ch != ENTER);
}