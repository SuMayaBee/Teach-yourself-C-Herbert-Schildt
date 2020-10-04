#include <stdio.h>

int main()
{
    char ch;
    do{
        ch = getchar();
        if(ch == EOF)
        {
            printf("Error loading characters.");
            break;
        }
        if(putchar('.') == EOF)
        {
            printf("Error while printing.\n");
            break;
        }
    }while(ch != '\n');


    return 0;
}
