/*This program converts Earth Days into Jovian Years. */

#include <stdio.h>

int main()
{
float e_days;  /*number of Earth days*/
float j_years;  /*equivlent number of Jovian years*/

/* get number of Earth days */

printf("Entr number of Earth days: ");
scanf("%f", &e_days);
j_years=e_days / (365.0*12.0);

/*now compute the answer*/
printf("Equivalent Jovian years: %f", j_years);

return 0;

}

