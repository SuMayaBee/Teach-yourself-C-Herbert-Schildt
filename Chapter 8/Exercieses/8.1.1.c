#include <stdio.h>

#define MAX 10
#define COUNTBY 3

int main()
{
    int i;
    for(i=0;i<MAX;i++)
        if(i%COUNTBY == 0) printf("%d\n",i);

    return 0;
}
