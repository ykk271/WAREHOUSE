#include <stdio.h>

void main(void)
{
	int count;
	int tmp;
	int total = 0;

	for (count = 1; count <= 5; count++)
	{
		printf("%d ��° �������� �Է� �� �� EnterŰ�� ��������.\n", count);

		scanf_s("%d", &tmp);

		total += tmp;

		printf("�Է� �� = %d, ���� = %d\n", tmp, total);
	}

	printf("���� ������ �� �D�� %d�Դϴ�. \n", total);
}