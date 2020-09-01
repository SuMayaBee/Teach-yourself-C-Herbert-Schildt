#include <stdio.h>
float avg();

int main()
{
	float x;
	printf("Enter 10 floating numbers respectively: \n");
	
	printf("Average of 10 floating numbers is %f", avg());
}

float avg()
{
	int i=5;
	float num,sum = 0.0;
	while(i--)
	{
		scanf("%f", &num);
		sum = sum + num;
	}
	
	return sum/5;
	
}
