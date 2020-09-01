#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[])
{
	int i, str;
	
	str = strcmp(argv[0], argv[1]);
	
	if(argc != 2)
	{
		printf("You must input two arguments\nTry again");
	}
	else{
		
	if(str > 1)
	printf("%s is greater than %s", argv[0], argv[1]);
	
	else
	printf("%s is greater than %s", argv[1], argv[0]);
	}
	
	
	
}

// this program should be run on command prompt
