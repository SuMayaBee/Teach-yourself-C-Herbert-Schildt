#include <stdio.h>
#include <string.h>

void mystrcat(char *with, char *form);

int main()
{
	char str[80];
	
	gets(str);
	mystrcat(str, " lets connect");
	printf(str);
}

void mystrcat(char *with, char *from)
{
	char *p;
	
	p = with + strlen(with) - 1;
	
	while(*from)
	{
		*p++ = *from++;
	}
	
	*p = '\0';
	
}
