#include <stdio.h>

int main()
{
    for(int i=2;i<=100;i++)
    printf("%-10d %-10d %-10d\n", i, i*i,i*i*i);
    //-ve sign makes it left justified
    return 0;
}
