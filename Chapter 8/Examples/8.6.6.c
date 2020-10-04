#include <stdio.h>

int main()
{
    int i,j;

    printf("Enter a decimal number: ");
    scanf("%d.%d" , &i,&j);// what is it ..what does it do??

    printf("Left part: %d, right part: %d", i, j);

    return 0;
}
