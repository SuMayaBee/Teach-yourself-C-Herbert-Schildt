#include <stdio.h>

int main()
{
	int *p,q;
	q=1;
	p=&q;
	printf("%p\n", p);
	printf("P = %d\n", *p);
	printf("Q = %d\n", q);
	*p++;
	printf("%p\n", p);
	printf("P = %d\n", *p);
	printf("Q = %d\n", q);
	
	
	
}