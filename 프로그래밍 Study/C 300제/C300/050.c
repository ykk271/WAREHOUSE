#include <stdio.h>

#define MAX(a,b)		a > b? a:b
#define MIN(a,b)		a < b? a:b

main()
{
	int i, j;

	i = 5;
	j = 7;

	printf("�ִ밪�� %d�Դϴ�. \n", MAX(i, j));
	printf("�ּҰ��� %d�Դϴ�. \n", MIN(i, j));
}