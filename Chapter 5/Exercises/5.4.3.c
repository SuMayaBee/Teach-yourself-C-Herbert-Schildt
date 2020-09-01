#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,m,k,x;
     int a[][3] = {
         1, 1, 1,
         2, 4, 8,
         3, 9, 27,
         4, 16, 64,
         5, 25, 125,
         6, 36, 216,
         7, 49, 343,
         8, 64, 512,
         9, 81, 729,
         10, 100, 1000
     };                                    /*for(i=0;i<10;i++){
                                            x=i+1;
                                                    for(j=0;j<3;j++)
                                                            {
                                                                a[i][j] = x;
                                                                        x=x*(i+1);
                                                                    }
                                                                        }*/


    printf("Enter Cube: ");
    scanf("%d", &m);

    for(i=0;i<10;i++){
        if(a[i][2] == m){
        printf("Root: %d\n", a[i][0]);
        printf("Square: %d\n", a[i][1]);
        break;
    }
    }


    if(i==10) printf("Cube is not found.\n");
    return 0;

}
