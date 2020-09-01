#include <stdio.h>

int main()
{

int w;
printf("Enter an integer: ");
scanf("%d", &w);

if(w%2==0 && w!=0)
{
	printf("Its even");
}
else printf("Its odd");

}
