#include <stdio.h>

int main()
{
	int i,*p,**mp;
	
	i = 1285;
	p = &i;
	mp = &p;
	
	printf("Address of 'i' is: %p\n", i);
	printf("Address of 'p' is: %p\n", p);
	printf("Address of 'mo' is: %p\n", mp);	
}
