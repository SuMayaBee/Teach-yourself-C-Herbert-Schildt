#include <stdio.h>

int main()
{
    char a;
    float x,y,i,j;
    printf("Press C to calculate the area of circle\nPress R to calculate the area of Ractangle\nPress S to calculate the area of Square\n");
    scanf("%c",&a);
    if(a=='C'){
        printf("Enter Radius:");
        scanf("%f", &x);
        printf("Total Area Circle: %.2f",(3.1416*x*x));
    }

    else if(a == 'R'){
        printf("Enter length and width:");
        scanf("%f%f", &i,&j);
        printf("Total Area of Rentangle: %f", i*j);
    }

    else if(a == 'S'){
        printf("Enter one side:");
        scanf("%f", &y);
        printf("Total Area of Square: %f", y*y);
    }
}
