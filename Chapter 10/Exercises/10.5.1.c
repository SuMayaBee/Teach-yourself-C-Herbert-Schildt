#include <stdio.h>
#include <stdlib.h>

union compose{
    double d;
    unsigned char ch[8];
};

void mywrite(double num,FILE *fp)
{
    int i;
    union compose val;
    val.d=num;
    for(i=0;i<8;i++)
        fputc(val.ch[i],fp);
}

double myread(FILE *fp){
    union compose val;
    fseek(fp,0L,SEEK_SET);
    for(int i=0;i<8;i++) val.ch[i]=fgetc(fp);

    return val.d;
}

int main(){

    FILE *fp;
    if(fp = fopen("data.txt","w+")==NULL){
        puts("Cannot open file.\n");
        exit(1);
    }

    mywrite(100.55, fp);
    double d = myread(fp);
    printf("%lf",d);
}
