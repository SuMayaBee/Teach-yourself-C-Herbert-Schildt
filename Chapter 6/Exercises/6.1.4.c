#include <stdio.h>

int main()
{
	int *p,q;
	q=0;
	p=&q;
	
	for(;*p != 10;)
	{
		printf("%d\n", *p);
		(*p)++;
	}
	
}
