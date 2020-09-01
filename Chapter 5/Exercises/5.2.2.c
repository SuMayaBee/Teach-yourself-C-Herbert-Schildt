#include <stdio.h>
#include <string.h>

int main()
{
	char ch[150], bigstr[200];
	int i,j,k;
	
	for(i=0;;i++)
	{
		printf("Enter your string. ");
		gets(ch);
				
		if(!strcmp(ch, "quit")) break;
		strcat(ch, "\n");
	    if((strlen(bigstr)+strlen(ch)) >= 200) break;
	    strcat(bigstr, ch);
					
	}
	
	printf(bigstr);
}
