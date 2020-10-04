#include <stdio.h>

int main()
{
    int i,j;
    char op;

    printf("Enter operation: ");
    scanf("%d %c%d",&i,&op,&j); // interesting implementation

    switch(op)
    {
        case '+': printf("%d", i+j);
        break;

        case '-': printf("%d", i-j);
        break;

        case '*': printf("%d", i*j);
        break;

        case '/': printf("%d", i/j);
        break;

        default:
            printf("Wrong operator!");
    }

    return 0;

}
