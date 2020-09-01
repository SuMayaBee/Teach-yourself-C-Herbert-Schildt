#include <stdio.h>

int main()
{
    int ServerUsers[5][2]= {
        1, 14,
        2, 28,
        3, 19,
        4, 8,
        5, 15
    };

    int server,i;


    scanf("%d", &server);

    /*look up it in the table*/
    for(i=0;i<5;i++)
    if(server == ServerUsers[i][0]) {
        printf("There are %d users on server %d.\n", ServerUsers[i][1],server);
        break;
    }

    /*report error if not found*/
    if(i==5) printf("Server not listed.\n");

    return 0;


}
