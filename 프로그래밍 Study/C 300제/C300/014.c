#include <stdio.h>

main()
{
	int b;
	int j;

	b = 10 > 5;
	j = 10 > 20;
	
	printf("%d\n", b);
	printf("%d\n", j);

	if (b)
		printf("b = Âü");
	else
		printf("b = °ÅÁş");
}