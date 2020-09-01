#include <stdio.h>

float convert(float x);

int main()
{
    float i,pound;
    printf("Enter the amount of money in Dollars: ");
    scanf("%f", &i);

        pound = convert(i);
    printf("Converted amount of money in Pounds: %.2f", pound);

}

float convert(float x)
{

    return (x/2);
}
