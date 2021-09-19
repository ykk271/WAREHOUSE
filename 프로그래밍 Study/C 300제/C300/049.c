#include<stdio.h>
#include<conio.h>

main()
{
	int ch;

	printf("아무키나 누르시오\n");

	ch = _getch(); //getch는 안되더라..

	printf("%c가 눌려졌습니다.", ch);
}