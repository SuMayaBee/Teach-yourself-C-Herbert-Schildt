#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    long loc;
    FILE *fp;

    if(argc!=2){
        puts("File name missing.");
        exit(1);
    }

    if((fp = fopen(argv[1],"rb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }

    printf("Enter byte to seek to: ");
    scanf("%ld", &loc);
    if(fseek(fp, loc, SEEK_SET)){
        printf("Seek error.\n");
        exit(1);
    }

    printf("Value at location %ld is %d", loc, getc(fp));

    fclose(fp);
}
