#include <stdio.h>
#include <stdlib.h>


int main(){
    char str[80] = "University of Dhaka\nIstiaq Ahmed Fahad.\n";
    FILE *fp;
    char *p;
    int i;

    /* open myfile for output */
    if((fp = fopen("in.txt","w")) == NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    /* write str to disk */
    p = str;
    while(*p){
        if(fputc(*p++, fp) == EOF){
            printf("Error writing file.\n");
            exit(1);
        }
    }
    puts("Data inclusion done!");
    fclose(fp);

    /*open myfile for input */

    if((fp = fopen("in.txt","r")) == NULL){
        printf("Cannot open file.\n");
        exit(1);
    }

    /* read back the file */

    while((i = fgetc(fp))!= EOF) putchar(i);
    fclose(fp);

    return 0;

}
