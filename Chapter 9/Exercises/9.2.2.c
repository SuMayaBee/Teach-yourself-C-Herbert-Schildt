#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    FILE *fp;
    char ch,i;
    int frequency[27]={0};


    if((fp = fopen("in.txt","r")) == NULL){
        puts("Can't open a file.\n");
        exit(1);
    }

    while((ch = fgetc(fp))!=EOF){
            char i = toupper(ch);

            if(i >= 'A' && i <= 'Z'){
                int id = i - 65;
                frequency[id]++;
            }
        }

    char l = 'A';
    puts("Characters:     Frequency");
    for(int k=0;k<26;k++){
        if(frequency[k] != 0)printf("     %c------------->%d\n",l++,frequency[k]);
    }

}
