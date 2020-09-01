#include <stdio.h>

void myputs(char *p);

int main()
{
	myputs("this is a test");
}

void myputs(char *p)
{
	while(*p)
	{
		printf("%c", *p);
		*p++;
	}
	
	printf("\n");
}
