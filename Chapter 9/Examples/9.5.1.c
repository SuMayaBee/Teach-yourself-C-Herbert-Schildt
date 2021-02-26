#include <stdio.h>
#include <stdlib.h>

double d[10] = {
  10.23, 19.87, 1002.23, 12.9, 0.897,
  11.45, 75.34, 0.0, 1.01, 875.875
};


int main(){
    int i;
    FILE *fp;

    if((fp = fopen("new.bin","wb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }

    for(i=0;i<10;i++){
        if(fwrite(&d[i], sizeof(double), 1, fp) != 1){
            puts("Writing error.");
            exit(1);
        }
    }
    fclose(fp);

    if((fp = fopen("new.bin","rb"))== NULL){
        puts("Cannot open file.");
        exit(1);
    }

    for(i=0;i<10;i++) d[i] = -1.0;

    for(i=0;i<10;i++){
        if(fread(&d[i], sizeof(double), 1, fp) != 1){
            puts("Reading error.");
            exit(1);
        }
    }

    for(i=0;i<10;i++) printf("%f ", d[i]);

    return 0;
}

