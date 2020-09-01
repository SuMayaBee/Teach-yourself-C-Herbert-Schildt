#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char command[80], temp[80];
	int i,j;
	
	for(;;)
	{printf("Operartions? ");
	gets(command);
	
	if(!strcmp(command, "quit")) break;
	
	printf("Enter fist number: ");
	gets(temp);
	i = atoi(temp);
	
	printf("Enter second numbr: ");
	gets(temp);
	j = atoi(temp);
	
	if(!strcmp(command,"add")) printf("%d\n", i+j);
	else if(!strcmp(command,"substract")) printf("%d\n", i-j);
	else if(!strcmp(command,"divide")) printf("%d\n", i/j);
	else if(!strcmp(command,"multiply")) printf("%d\n", i*j);
	
	}
	
	return 0;
}
