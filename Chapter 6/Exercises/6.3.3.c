#include <stdio.h>

int main()
{
	char str[80],*p;
	
	printf("Enter a string: ");
	gets(str);
	
	p = str;
	
	for(;;)
	{
		if (*p == ' ')
		{
		while(*p != '\0'){
			*p++;
			printf("%c", *p);	
		}
		break;
		}
		
		else *p++;
	}
	
	
	
}
