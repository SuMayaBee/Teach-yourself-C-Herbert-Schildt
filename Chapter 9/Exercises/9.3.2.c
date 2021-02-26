#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp1, *fp2, *fp3;
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

	if((fp3 = fopen("temp.bin","wb"))==NULL)
	{
		printf("Cannot open temp file.\n");
		exit(1);
	}



    while(!feof(fp1)){

        ch1 = fgetc(fp1);
        if(ferror(fp1)){
            puts("Error reading first file.\n");
            exit(1);
        }

        fputc(ch1, fp3);
        if(ferror(fp3)){
            puts("Error writing temporary file.\n");
            exit(1);
        }

    }
    puts("Content of FILE_1 copied to TEMP File.");

    fp1 = fopen(argv[1],"wb");
    while(!feof(fp2)){

        ch1 = fgetc(fp2);
        if(ferror(fp2)){
            puts("Error reading second file.\n");
            exit(1);
        }

        fputc(ch1, fp1);
        if(ferror(fp1)){
            puts("Error writing first file.\n");
            exit(1);
        }

    }
    puts("Content of FILE_2 copied to FILE_1.");

    fp3 = fopen("temp.bin","rb");
    fp2 = fopen(argv[2],"wb");
    while(!feof(fp3)){

        ch1 = fgetc(fp3);
        if(ferror(fp3)){
            puts("Error reading temporary file.\n");
            exit(1);
        }

        fputc(ch1, fp2);
        if(ferror(fp2)){
            puts("Error writing second file.\n");
            exit(1);
        }

    }
    puts("Content of TEMP file copied to FILE_2.");


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

	if(fclose(fp3)==EOF)
	{
		printf("Error closing destination file.\n");
		exit(1);
	}


}
