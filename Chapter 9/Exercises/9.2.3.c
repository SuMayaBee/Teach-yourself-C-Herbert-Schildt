#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    FILE *from, *to;
    char ch;


    if((from = fopen(argv[1],"r")) == NULL){
        puts("Can't open File.\n");
        exit(1);
    }

    to = fopen(argv[2],"w");


    if(strcmp(argv[3],"watch") == 0){
        while((ch = fgetc(from))!=EOF){
            printf("%c", ch);
            fputc(ch, to);
        }
    }
    else{
       while((ch = fgetc(from))!=EOF) fputc(ch, to);
    }


    fclose(from);
    fclose(to);

}
