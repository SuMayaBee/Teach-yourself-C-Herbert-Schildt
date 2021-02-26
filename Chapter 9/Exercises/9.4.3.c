#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fp1,*fp2;
    char str[100];

    if(argc != 3){
        puts("Specify source File and destination File name.\n");
        exit(1);
    }

    if((fp1 = fopen(argv[1],"r"))==NULL){
        puts("Cannot open a file.\n");
        exit(1);
    }

    if((fp2 = fopen(argv[2],"w"))==NULL){
        puts("Cannot open a file.\n");
        exit(1);
    }

    while(!feof(fp1)){
        fgets(str, 99, fp1);
        if(ferror(fp1)){
            puts("Error reading source file");
            break;
        }
        if(!feof(fp1) fputs(str, fp2);
        if(ferror(fp2)){
            puts("Error writing destination file.");
            break;
        }
    }

    if(fclose(fp1) == EOF){
        puts("Error closing source file.");
        exit(1);
    }
    if(fclose(fp2) == EOF){
        puts("Error closing destination file.");
        exit(1);
    }

}




