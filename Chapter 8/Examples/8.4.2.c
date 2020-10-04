#include <stdio.h>

int main()
{
    char str[90];
    printf("Enter a string; ");
    if(gets(str)) /* if not null*/
       printf("Here is your string: %s\n", str);


    return 0;
}
