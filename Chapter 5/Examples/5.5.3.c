#include <stdio.h>

int main()
{
	char text[][180] = {
		"when", "in", "the",
		"course", "of", "human",
		"event", "HOw", "strange", 
		"it", "is"
	};
	
	int i, j;
	
	for(i=0;text[i][0];i++)
	{
		for(j=0; text[i][j];j++)
		printf("%c", text[i][j]);
		printf("\tidices:--- %d--- %d----\n",i,j);
		printf(" ");
	}
	
	return 0;
}
