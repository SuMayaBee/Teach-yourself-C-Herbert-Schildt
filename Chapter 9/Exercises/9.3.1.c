#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1;
	char ch1;
	unsigned long l;

	if((fp1 = fopen(argv[1],"rb"))==NULL)
	{
		printf("Cannot open first file.\n");
		exit(1);
	}

    l = 0;

    while(!feof(fp1)){

        ch1 = fgetc(fp1);
        if(ferror(fp1)){
            puts("Error reading first file.\n");
            exit(1);
        }
        l++;

    }

    printf("Total bytes in %s Binary File is: %lu", argv[1], l);


	if(fclose(fp1)==EOF)
	{
		printf("Error closing source file.\n");
		exit(1);
	}

}

