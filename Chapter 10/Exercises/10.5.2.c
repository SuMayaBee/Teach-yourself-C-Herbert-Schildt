#include<stdio.h>

int main ()
{
    union t_type {
        long L;
        int i;

    }uvar;

    uvar.L=0L;
    uvar.i=100;

    printf("%ld",uvar.L);
    return 0;
}
