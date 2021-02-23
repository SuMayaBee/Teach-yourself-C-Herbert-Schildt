#include <stdio.h>
void f(void);
int main(void)
{
    f();
    f();
    f();
    return 0;
}

void f(void)
{
    int i = 10;
    printf("%d",i);
}
