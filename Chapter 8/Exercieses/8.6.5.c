#include <stdio.h>

int main()
{
    int x;
    printf("Enter a hexadecimal number: ");
    scanf("%x", &x);

    printf("%X %d %o", x,x,x);
}
