#include <stdio.h>
#include <stdlib.h>

double d[10] = {
  10.23, 19.87, 1002.23, 12.9, 0.897,
  11.45, 75.34, 0.0, 1.01, 875.875
};


int main(){
    int i;
    FILE *fp;
    double value;
    long loc;

    if((fp = fopen("in.txt","wb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }


    if(fwrite(d, sizeof(d), 1, fp) != 1){
        puts("Writing error.");
        exit(1);
    }

    fclose(fp);

    if((fp = fopen("in.txt","rb"))== NULL){
        puts("Cannot open file.");
        exit(1);
    }

    printf("Which element?");
    scanf("%ld", &loc);
    if(fseek(fp, loc*sizeof(double), SEEK_SET)){
        printf("Seek Error.\n");
        exit(1);
    }

    fread(&value, sizeof(double), 1, fp);
    printf("Element %ld is %f", loc, value);


    return 0;
}

