#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char str[80];

    if(argc!=2){
        puts("Specify file name.\n");
        exit(1);
    }

    if((fp = fopen(argv[1],"w"))==NULL){
        puts("Cannot open file.\n");
        exit(1);
    }

    printf("Enter a blank line to stop.\n");
    do{
        printf(": ");
        gets(str);
        strcat(str, "\n");
        if(*str != '\n') fputs(str, fp);
    }while(*str != '\n');

    fclose(fp);

    if((fp = fopen(argv[1],"r"))==NULL){
        puts("Cannot open file.\n");
        exit(1);
    }

    do{
        fgets(str, 79, fp);
        if(!feof(fp)) printf(str);
    }while(!feof(fp));

    fclose(fp);

    return 0;

}
