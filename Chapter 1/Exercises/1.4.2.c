#include <stdio.h>

int main()
{
float f,num,sum;

printf("Enter first floating point number: ");
scanf("%f", &num);

printf("Enter second floating point number: ");
scanf("%f", &f);

sum = num+f;

printf("Summation is: %f", sum);

return 0;
}
