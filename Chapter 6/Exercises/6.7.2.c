#include <stdio.h>

void func(int *x);

int main()
{
	int *p,i;
	p = &i;
	func(p);
	
	printf("%d", *p);
}

void func(int *x)
{
	*x = -1;
}
