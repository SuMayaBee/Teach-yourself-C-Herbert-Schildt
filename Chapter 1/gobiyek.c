#include <stdio.h>

float add(float x,float y);
float sub(float x,float y);
float multi(float x,float y);
float div(float x,float y);


int main()
{
	float g,a,l,b,k;

	scanf("%f %f", &a ,&b);

		l=add(a,b);
		g=div(l,2);
		k=sub(g,1);
	

	
	printf("Show the gobiyek: %f", k);
}




	float add(float x,float y)
{


return (x+y);

}

	float sub(float x,float y)
{


return (x-y);

}

	float multi(float x,float y)
{


return (x*y);

}

	float div(float x,float y)
{


return (x/y);

}
