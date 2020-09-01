#include <stdio.h>
#include <conio.h>

int main()
{
    int i;
    char ch;

    ch = 'a'; /* give ch an initial value */

    for(i=0; ch!= 'q'; i++){
        printf("pass: %d\n", i);
        ch = getche();
    }
    return 0;
}
