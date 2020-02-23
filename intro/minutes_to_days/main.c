#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initialized variables
    float minutes_in_year = 60*24*365.25;
    float minutes_in_day = 60*24;
    float minutes = 0.0;

    //receive user input
    printf("Enter in some number of minutes: ");
    scanf("%f", &minutes);

    //compute values for output
    float years = minutes / minutes_in_year;
    float days = minutes / minutes_in_day;

    //output computed values
    printf("you entered this many days: %f\n", days);
    printf("you entered this many years: %f\n", years);

    return 0;

}
