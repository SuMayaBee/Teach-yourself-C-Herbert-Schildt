#include <stdio.h>

int main()
{
    int i,j;

    printf("ASCII code from A to Z & a to z\n");

    for(i=65,j=97;i<=90,j<=122;i++,j++){
        printf("%c--->%d        %c--->%d\n", i,i,j,j);
    }



}
