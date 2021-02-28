#include <stdio.h>
#include <time.h>

int main(){
    struct tm *systime;
    time_t t;

    t = time(NULL);
    systime = gmtime(&t); //its not available in my system

    printf("Time is %.2d:%.2d:%.2d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);
    printf("Date: %.2d-%.2d-%.2d\n", systime->tm_mon+1, systime->tm_mday, systime->tm_year);
}

