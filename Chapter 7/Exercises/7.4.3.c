#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int x;
	
	if (strcmp(argv[1],"add") == 0)
	{
		x = atoi(argv[3]) + atoi(argv[2]);
		printf("Summation is %d",x);
	}
	
	else if(strcmp(argv[1],"subtract") == 0)
	{
		if (atoi(argv[3])>atoi(argv[2]))
		{
			x = atoi(argv[3]) - atoi(argv[2]);
		printf("Subtraction is %d",x);
		}
		else 
		{
			x = atoi(argv[2]) - atoi(argv[3]);
		printf("Subtraction is %d",x);
		}
	}
	
	else if(strcmp(argv[1],"multiply") == 0)
	{
		x = atoi(argv[3]) * atoi(argv[2]);
		printf("Multiplication is %d",x);
	}
	
	else if(strcmp(argv[1],"division") == 0)
	{
		if (atoi(argv[3])>atoi(argv[2]))
		{
			x = atoi(argv[3]) / atoi(argv[2]);
		printf("Division is %d",x);
		}
		else 
		{
			x = atoi(argv[2]) / atoi(argv[3]);
		printf("Division is %d",x);
		}
		
	}
	
}

//this program should be run on command prompt

