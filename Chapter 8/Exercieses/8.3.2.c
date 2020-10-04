#include <stdio.h>

int main()
{
    do{
        putchar('.');
        if(kbhit()) break;
    }while(1);

    return 0;
}
