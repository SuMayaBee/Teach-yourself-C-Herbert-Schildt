#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    long loc;
    FILE *in, *out;
    char ch;

    if(argc!=3){
        puts("Usage: revcopy <source> <destination>");
        exit(1);
    }

    if((in = fopen(argv[1],"rb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }

    if((out = fopen(argv[2],"wb"))==NULL){
        puts("Cannot open file.");
        exit(1);
    }

    fseek(in, 0L, SEEK_END);
    loc = ftell(in);

    loc = loc - 1;

    while(loc >= 0L){
        fseek(in, loc, SEEK_SET);
        ch = fgetc(in);
        fputc(ch, out);
        loc--;
    }

    fclose(in);
    fclose(out);
}
