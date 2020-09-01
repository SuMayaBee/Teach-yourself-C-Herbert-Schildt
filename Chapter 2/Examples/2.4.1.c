#include <stdio.h>

int main()

{

int answer, count;

for (count = 1; count < 11; count = count + 1)
{

printf("What is %d + %d ?", count, count);
scanf("%d", &answer);

if ( answer == count + count) printf("Right\n");

else{

printf("Sorry, you are wrong.");
printf("The answer is %d\n", count+count);
break;
}

}
return 0;

}
