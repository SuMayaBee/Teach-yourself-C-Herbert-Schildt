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

    fseek(fp, 0L, SEEK_END);
    loc = ftell(fp);


    fseek(fp, 0L, SEEK_SET);
    for(; loc>=0; loc = loc - 1L){
        ch = fgetc(fp);
        putchar(ch);
    }

    fclose(fp);


}
