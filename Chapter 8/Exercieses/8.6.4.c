#include <stdio.h>

int main()
{
    int i,k;
    double d;
    char str[100];

    scanf("%s %lf %d%n", str,&d,&i,&k);
    printf("Total character input is: %d", k);

    return 0;

}
