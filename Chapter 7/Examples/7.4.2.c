#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	double pounds;
	
	pounds = atof(argv[1])/16.0;
	printf("%s Ounce = %f pounds",argv[1], pounds);
	
	return 0;
}

// this program should be run on command prompt
