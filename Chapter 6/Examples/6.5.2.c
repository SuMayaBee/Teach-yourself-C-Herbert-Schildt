#include <stdio.h>
#include <string.h>

char *p[][2]={
"Red Delicious", "red",
"Golden delicious", "yellow",
"Winesap", "red",
"Gala", "reddish orange",
"Lodi", "green",
"Mutsu", "yellow",
"Cortland", "red",
"Jonathan", "red",
"."
};

int main()
{
	int i;
	char apple[80];
	
	printf("Enter apple name: ");
	gets(apple);
	
	for(i = 0; *p[i][0]; i++)
	{
		if(!strcmp(apple,p[i][0]))
		{
			printf("%s is %s\n", apple, p[i][1]);
		}
	}
}

