#include <stdio.h>

main()
{
	int saram_A = 0;
	int saram_B = 0;
	int* pointer;
	int* psaram;

	pointer = &saram_A;
	*pointer = 1;
	printf("%d, %d\n", saram_A, *pointer);		//1, 1

	psaram = &saram_A;
	*psaram = 2;
	printf("%d, %d, %d\n", saram_A, *pointer, *psaram);		//2, 2, 2

	pointer = &saram_B;
	*pointer = 3;
	printf("%d, %d, %d\n", saram_A, saram_B, *pointer);		//2, 3, 3

	psaram = &saram_B;
	*psaram = 4;
	printf("%d, %d, %d, %d\n", saram_A, saram_B, *pointer, *psaram);		//2, 4, 4, 4

}