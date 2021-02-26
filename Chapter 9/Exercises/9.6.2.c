#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    FILE *fp;
    unsigned char ch,val;


    if(argc != 3){
        puts("Usage: <source File> <value>");
        exit(1);
    }

    if((fp = fopen(argv[1],"rb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }

    val = atoi(argv[2]);

    while(!feof(fp)){
        ch = fgetc(fp);

        if((ch-'0') == val){
            printf("%d is found at %d th byte\n", val, ftell(fp));
        }
    }

    puts("Data not found.");

}

