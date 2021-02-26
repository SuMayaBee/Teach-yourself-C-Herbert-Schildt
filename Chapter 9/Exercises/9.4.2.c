#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
    FILE *fp;
    char str[100],ch;

    if(argc != 2){
        puts("Specify File name.\n");
        exit(1);
    }

    if((fp = fopen(argv[1],"r"))==NULL){
        puts("Cannot open a file.\n");
        exit(1);
    }

    int cnt = 0; //basically denotes how many lines you have
    while(!(feof(fp))){
        fgets(str, 99, fp);
        printf(str);
        cnt++;

        if(cnt == 10){
            printf("Want to see more? y/n");
            scanf("%c", &ch);
            if(toupper(ch) == 'N') break;
            cnt=0;
        }
    }

    fclose(fp);
}
