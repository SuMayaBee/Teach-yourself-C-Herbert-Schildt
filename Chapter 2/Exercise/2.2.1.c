#include <stdio.h>

int main()
{

float i,j;
int m;

printf("Enter two numbers: ");
scanf("%f %f", &i, &j);

printf("Tap 1 for SUM and Tap 2 for PRODUCT");
scanf("%d", &m);

if(m == 1) printf("Total summation is: %f", i+j);
else if(m == 2) printf("Total product is: %f", i*j);

return 0;

}
