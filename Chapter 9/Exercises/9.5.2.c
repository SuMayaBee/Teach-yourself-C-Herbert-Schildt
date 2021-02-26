#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *source, *to;
    float d,x;
    int i;

    if((source = fopen("count.bin","rb"))==NULL){
        puts("Cannot open a file.");
        exit(1);
    }

    if((to = fopen("value.bin","rb"))==NULL){
        puts("Cannot open a file.");
        exit(1);
    }

    fread(&i, sizeof(i), 1, source);
    printf("SIZE: %d\n", i);

    for(int k=0; k<i; k++){
        fread(&x,sizeof(x),1,to);
        printf("Value %d: %f\n", k, x);
    }

    fclose(source);
    fclose(to);

}
