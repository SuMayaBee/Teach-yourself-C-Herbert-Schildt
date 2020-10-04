#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{

    char ch;
    do{
        ch = getche();
        cprintf("%c", toupper(ch));// doesn't work on my home pc.
    }while(ch != 'q');


    return 0;
}
