#include <stdio.h>

int main()
{
    char ch;

    for(ch = getche(); ch != 'q'; ch=getche());
    printf("Found the q.");

    return 0;
}
