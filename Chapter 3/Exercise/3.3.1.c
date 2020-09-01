#include <stdio.h>

int main()
{
    float d,s,k;
    char x;

    printf("Enter values of distance and avg speed respectively\n");
    scanf("%f%f", &d,&s);

    k = (d/s);
    printf("which formate do you want..second/minitue/hour\n");
    getchar();
    scanf("%c", &x);

    if(x=='s'){
    printf("driving time: %.2f seconds",k);
    }
    else if(x=='m'){
        printf("driving time: %.2f minitues",(k/60));
    }
    else if(x=='h'){
        printf("driving time: %.2f hours",(k/3600));
    }



}
