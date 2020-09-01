#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	double pounds;
	
	if (argc != 2)
	{
		printf("Usage: Convert <ounces>\n");
		printf("Try  Again");
		exit(1);
	}
	else 
	{
		pounds = atof(argv[1]) / 16.0;
		printf("%s Ounce = %f pounds", argv[1], pounds);
	}
	
}

// this program should be run on command prompt
