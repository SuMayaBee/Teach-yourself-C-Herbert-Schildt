#include <stdio.h>

int main()
{
    char a,b,c;
    printf("Input Ten letters");
    scanf("%c%c%c",&a,&b,&c);

    (a<b)?printf("%c", b):(a<c)?printf("%c",a):printf("%c", c);
}
