#include <stdio.h>

void prompt(char *msg, char* str);

int main()
{
	char name[80];
	prompt("Enter you name: ", &name);
	printf("Your name is %s", name);
}

void prompt(char *msg, char* str)
{
	printf(msg);
	//scanf("%s", str);
	gets(str);
}
