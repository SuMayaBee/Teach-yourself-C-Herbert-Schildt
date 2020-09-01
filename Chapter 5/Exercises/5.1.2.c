#include <stdio.h>

int main()
{
	int a[15],i,j,k=0,b[15];
	
	for(i=0;i<10;i++)
	scanf("%d", &a[i]);
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i] == a[j]) 
			{
			b[k] = a[i];
			k++;
			}
			
		}
	}
	
	if(k>1){
	printf("Matched numbers.\n");
	for(i=0;i<k;i++)
	printf("%d ", b[i]);
}
else printf("NO match found\n");

}
