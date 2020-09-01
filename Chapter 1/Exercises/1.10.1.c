#include <stdio.h>

float moon(float x);

int main()
{
    float w;
    printf("Enter your weight: ", w);
    scanf("%f", &w);

    printf("Weight on moon is: %f",  moon(w));
}

float moon(float x)
{
    return (.17*x);
}
