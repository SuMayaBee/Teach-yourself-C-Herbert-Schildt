#include <stdio.h>

int main()
{
    unsigned long int distance;
    printf("Enter distance");
    
    scanf("%lu", &distance);
    
    printf("Time takes to cross the distance: %lu second", (distance/186000));
    
}