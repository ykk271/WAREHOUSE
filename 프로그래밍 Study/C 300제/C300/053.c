#include <stdio.h>

void main(void)
{
	int count;
	int tmp;
	int total = 0;

	for (count = 1; count <= 5; count++)
	{
		printf("%d 번째 정수값을 입력 한 후 Enter키를 누르세요.\n", count);

		scanf_s("%d", &tmp);

		total += tmp;

		printf("입력 값 = %d, 총합 = %d\n", tmp, total);
	}

	printf("읽은 정수의 총 핪은 %d입니다. \n", total);
}