#include <stdio.h>

float func(void);

int main()
{

    printf("Number is %f", func());
}

float func(void)
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    return i;
}
