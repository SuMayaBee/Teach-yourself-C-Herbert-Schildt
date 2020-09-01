#include <stdio.h>

int fact(int x);

int main()
{
	int num;
	printf("Enter your number: ");
	scanf("%d", &num);
	
	printf("Factorial is of %d is %d", num, fact(num));
	
	return 0;
	
}

int fact(int x)
{
	if (x == 1) return 1;
	
	else return x*fact(x-1);	
	
	
}
