#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i,sum = 0;
	
		
	for (i = 0; i<argc; i++){
	printf("argv[%d] = %s\n",i,argv[i]);
	sum += atoi(argv[i]);
		
	}
	
	printf("Summation is %d", sum);
	
	
	return 0;
	
	
}


// this program should be run on command prompt
