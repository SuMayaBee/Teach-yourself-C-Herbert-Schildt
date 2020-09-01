#include <stdio.h>
#include <string.h>

int main()
{
	char *p[3] = {
		"yes", "no",
		"maybe-rephrase the question"
	};
	
	char str[80];
	
	printf("Enter your string: ");
	gets(str);
	
	printf("String length is: %d",  strlen(str));
	printf(p[strlen(str)%3]);
	
} 
