#include <stdio.h>
#include <conio.h>

int main()
{
    double amount;

    amount = 0.20;
    printf("Printing 5-percent tax table\n");
    printf("Press a key to stop.\n");

    do{
        printf("Amount: %f, tax: %f\n", amount, amount*0.05);
        if(kbhit()) break; // if press any key while continuing the loop , loop will be terminated .
        amount = amount+0.02;

    }while(amount < 100.0);

    return 0;
}
