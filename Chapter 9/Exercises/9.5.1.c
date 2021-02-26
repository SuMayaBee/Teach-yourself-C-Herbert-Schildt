#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *from, *to;
    float d;
    int i,cnt=0;

    if((from = fopen("value.bin","wb"))==NULL){
        puts("Cannot open a file.");
        exit(1);
    }


    if((to = fopen("count.bin","wb"))==NULL){
        puts("Cannot open a file.");
        exit(1);
    }

    puts("Enter values(0 to quite): ");
    while(1){

        scanf("%f",&d);
        if((int)d == 0) break;
        cnt++;
        fwrite(&d, sizeof(d),1, from);
    }

    fwrite(&cnt, sizeof(cnt), 1,to);

    fclose(from);
    fclose(to);
}
