#include <stdio.h>

int f1(void);

int main(void)
{
    double answer;

    answer = f1();
    printf("%f", answer);
}

int f1(void)
{
    return 100;
}
