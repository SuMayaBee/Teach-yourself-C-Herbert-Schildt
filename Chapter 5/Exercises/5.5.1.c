#include <stdio.h>
#include <string.h>

int main()
{
    char digit[][13]={
        "zero","one", "two", "three",
        "four","five","six","seven","eight",
        "nine","ten","eleven","twelve"
    };
    char num;
    printf("Enter Num: ");
    scanf("%c", &num);
    
     num = num - '0';

   if(num>=0 && num<10)
    printf("%s", digit[num]);
    
    return 0;
}