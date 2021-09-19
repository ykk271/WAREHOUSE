#include <stdio.h>

int hapf(int value);

main()
{
	printf("%d\n", hapf(10));
	printf("%d\n", hapf(100));
	printf("%d\n", hapf(10000));
}

int hapf(int value)
{
	int i = 0;
	int hap = 0;

	for (i = 0; i < value; i++)
	{
		hap = hap + i;
	}

	return hap;
}