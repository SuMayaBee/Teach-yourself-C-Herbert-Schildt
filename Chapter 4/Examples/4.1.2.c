#include <stdio.h>
int main(void)
{
    short int i; // signed abort integer
    unsigned short int u; // an unsigned short integer
    u = 33000;
    i = u;
    printf("%hd %hu", i, u);
    return 0;
}
