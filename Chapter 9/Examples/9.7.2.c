#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char ch;
    long int loc;

    if(argc != 2){
        puts("Specify File name.");
        exit(1);
    }

    if((fp = fopen(argv[1],"rb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }

    puts("First Run.\n");
    while(!feof(fp)){
        putchar(getc(fp));
    }

    rewind(fp);

    puts("\nSecond Run.\n");
    while(!feof(fp)){
        putchar(getc(fp));
    }

    fclose(fp);
}
