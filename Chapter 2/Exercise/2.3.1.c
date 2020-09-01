#include <stdio.h>

int main()
{

int i,m,n;
printf("Press 1 for Adding two numbers\nPress 2 for Substracting two numbers");
scanf("%d", &i);

if( i == 1 ) 
{
	printf("Enter two numbers to add: ");
	scanf("%d %d", &m, &n);
	
	printf("Result is: %d", (m+n));
}

else
{
	printf("Enter two numbers to substract: ");
	scanf("%d %d", &m, &n);
	
	printf("Result is: %d", (m-n));
}

return 0;

}
