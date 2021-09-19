#include <stdio.h>

main()
{
	int i = 5;

	switch (i)
	{
	case 1:
		printf("1");
		break;
	case 2:
		printf("2");
		break;
	default:
		printf("%d",i);
		break;
	}

	return 0;
}