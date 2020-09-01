#include <stdio.h>

int main()
{
    int a[3][3][3];
    int i,j,k,x,sum=0;

    x=1;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++){
                    a[i][j][k] = (i+1)*(j+1)*(k+1);
            printf("%d ", a[i][j][k]);
            }

            /*sum of all element*/
            sum = 0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            for(k=0;k<3;k++){
                    sum = sum + a[i][j][k];
            }

            printf("\n%d", sum);
            return  0;

}
