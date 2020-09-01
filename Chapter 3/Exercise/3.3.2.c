#include <stdio.h>

int main()

{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);

    for(;i>0;i--){
        printf("%d\n", i);
    }
    printf("\a");
}
