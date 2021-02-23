#include <stdio.h>
#include <math.h>
int main(void)
{
    double i;
    for (i=1.0; i<101.0; i++)
    {

        printf("The square root of %1f is %lf\n", i, sqrt(i));
        printf ("whole number part: %d ",(int) sqrt(i)) ;
        printf("Fractional part: %lf\n", sqrt(i)-(int)sqrt(i));
        printf (" \n") ;
    }
    return 0;
}

