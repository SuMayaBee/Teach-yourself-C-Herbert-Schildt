#include <stdio.h>

int outnum(int x);

int main()

{
    int i,z;
    scanf("%d", &i);
    z = outnum(i);
}

int outnum(int x)
{
    printf("Show the integer: %d", x);
}
