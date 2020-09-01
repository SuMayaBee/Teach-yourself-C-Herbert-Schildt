#include <stdio.h>

int main()
{
    int i;
    printf("Enter  an integer: ");
    scanf("%d", &i);

    for ( ; i > 0; i--){
        printf("%d\n", i);
        if(i == 0) printf("\a");
        else continue;
    }
}
