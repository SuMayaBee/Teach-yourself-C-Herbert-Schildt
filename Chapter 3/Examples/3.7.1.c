#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char ch;

    /*displays all numbers that are multiple of 6*/

    for(i=1; i<10000; i++){
            if(!(i%6)){
                printf("%d, more? (Y/N)", i);
                ch = getche();
                if(ch == 'N') break;
                printf("\n");
            }

    }

    return 0;
}
