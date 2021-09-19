#include<stdio.h>

void print_x(int x);
void print_gx(void);

int x = 20;

main()
{
	int x = 5;
	printf("x = %d\n", x);

	print_x(10);
	print_gx();
}

void print_x(int x)
{
	printf("x = %d\n", x);
}

void print_gx(void)
{
	printf("x = %d\n", x);
}