#include <stdio.h>

int main()
{
	const int ASCII_BEGIN = 0;
	const int ASCII_END = 255;

	int i;

	for (i = ASCII_BEGIN; i <= ASCII_END; i++)
	{
		printf("ASCII코드(%3d), 문자 = %c\n", i, i);
	}


	return 0;	
}