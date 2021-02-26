#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char str[100];

    if((fp = fopen(argv[1],"r"))==NULL){
        puts("Cannot open a file.\n");
        exit(1);
    }

    fgets(str, 79, fp);
    printf(str);
    fclose(fp);
}
