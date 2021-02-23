#include <stdio.h>
void f1 (void);
int count; /* global count */
int main(void)
{
    count = 10;
    fl () ;
    printf("count in main(): %d\n", count);
    return 0;
}
void fl(void)
{
    int count; /* local count */
    count = 100;
    printf("count in fl() %d\n", count);
}
