#include <stdio.h>

int main()
{
    char str[80];
    printf("Enter letter, anything to stop\n");
    scanf("%[a-zA-Z]",str);

    printf(str);

    return 0;
}
