#include <stdio.h>

int main()
{
    char first[30],middle[30],last[30];
    printf("Enter your name: \n");

        printf("First name: ");
    scanf("%20s", first);// remember using 20 as stated in question

       printf("Middle name: ");
    scanf("%20s", middle);

       printf("Last name: ");
    scanf("%20s", last);


    printf("\nYour full name is: %s %s %s", first,middle,last);

}
