#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2;
	char ch1,ch2, same;
	unsigned long l;


	if(argc!=3) {
		printf("Its command line argument program.\nWhile compiling using cmd type object name and then\ntype input file(eg: in.txt) and output file(eg: out.txt)\n");
		exit(1);
	}


	if((fp1 = fopen(argv[1],"rb"))==NULL)
	{
		printf("Cannot open first file.\n");
		exit(1);
	}

	if((fp2 = fopen(argv[2],"rb"))==NULL)
	{
		printf("Cannot open second file.\n");
		exit(1);
	}

    l = 0;
    same = 1;

    while(!feof(fp1)){

        ch1 = fgetc(fp1);
        if(ferror(fp1)){
            puts("Error reading first file.\n");
            exit(1);
        }

        ch2 = fgetc(fp2);
        if(ferror(fp2)){
            puts("Error reading second file.\n");
            exit(1);
        }

        if(ch1 != ch2){
            printf("Files differ at bytes no: %u\nCH1: %c & CH2: %c\n", l, ch1, ch2);
            same = 0;
            break;
        }

        l++;
    }
    if(same) puts("Files are the same.");


	if(fclose(fp1)==EOF)
	{
		printf("Error closing source file.\n");
		exit(1);
	}


	if(fclose(fp2)==EOF)
	{
		printf("Error closing destination file.\n");
		exit(1);
	}


}
