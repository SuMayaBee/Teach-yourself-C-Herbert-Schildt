#include <stdio.h>
#include <ctype.h>

int main(){
    char fname[80];
    char ch;

    printf("Enter name of file to erase: ");
    gets(fname);

    printf("Are you sure ? (Y/N)");


    if(toupper(getchar()) == 'Y') {
        if(remove(fname)!=0) puts("File does not exits.\n");
        else puts("File deleted successfully");
    }

}
