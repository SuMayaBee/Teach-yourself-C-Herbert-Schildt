#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char str[80];
	double ld;
	int d;

    if(argc!=2){
        puts("Specify file name.\n");
        exit(1);
    }

    if((fp = fopen(argv[1],"w"))==NULL){
        puts("Cannot open file.\n");
        exit(1);
    }

    fprintf(fp, "%f -> %d -> %s", 12.54,12,"hello");
    fclose(fp);

    if((fp = fopen(argv[1],"r"))==NULL){
        puts("Cannot open file.\n");
        exit(1);
    }

    fscanf(fp, "%lf -> %d -> %s", &ld, &d, str);
    printf("%f %d %s", ld, d, str);

    fclose(fp);

    return 0;

}
