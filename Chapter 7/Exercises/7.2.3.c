#include <stdio.h>

int main()
{
	char str[50];
	printf("Enter your string ");
	gets(str);
	recurse(str);
	
}

void recurse(char *p)
{
	if (*p)
	{
		printf("%c\n", *p);
		*p++;
		recurse(p);
	}
	else *p = '\0';
}
