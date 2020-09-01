#include <stdio.h>

int main()
{
	char *p, **mp, str[80];
	
	p = str;
	mp  = &p;
	
	printf("Enter your name: ");
	gets(*mp);
	
	printf("Hi %s\n", *mp);
}
