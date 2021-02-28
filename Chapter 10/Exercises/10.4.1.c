#include<stdlib.h>
#include<stdio.h>

struct data{
    int a: 3;
    int b: 3;
    int c: 2;
}val;

int main(){

    val.a = -1;
    val.b = 3;
    val.c = 2;
    printf("A: %d, B: %d, C: %d\n",val.a, val.b, val.c);

}
