#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *from, *to;
	char ch;
	int i;
	
	
	if(argc!=3) {
		printf("Usage: copy<source> <destination>\n");
		exit(1);
	}
	
//	for( i=0;i<argc;i++)
//{
//	printf("%d is %s\n",i+1,argv[0]);
//}
	
	if((from = fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot open source file.\n");
		exit(1);
	}
	
	if((to = fopen(argv[2],"w"))==NULL)
	{
		printf("Cannot open destination file.\n");
		exit(1);
	}
	
	while(!feof(from))
	{
		ch = fgetc(from);
		if(ferror(from))
		{
			printf("Error reading source file.\n");
			exit(1);
		}
		if(!feof(from)) fputc(ch,to);
		if(ferror(to))
		{
			printf("Error writing destination file.\n");
			exit(1);
		}
		
	}
	
	if(fclose(from)==EOF)
	{
		printf("Error closing source file.\n");
		exit(1);
	}
	
	
	if(fclose(to)==EOF)
	{
		printf("Error closing destination file.\n");
		exit(1);
	}
	
	printf("DONE!!");
	
}
