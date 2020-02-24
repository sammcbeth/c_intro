#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int rain = rand() % 21;
    int yearly_total[5];
    int yearly_avg;
    int monthly_avg[12];
    int weather[5][12];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 12; j++){
            monthly_avg[j] = 0;
            weather[i][j] = rain;
            rain = rand() % 21;


        }

    }
    for(int i = 0; i < 5; i++){
        yearly_total[i] = 0;
        for(int j = 0; j < 12; j++){
            //printf("%d\n", weather[i][j]);
            yearly_total[i] += weather[i][j];
            monthly_avg[j] += weather[i][j];
        }
        //printf("%d\n",yearly_total[i]);

        //printf("\n");

    }

    int total = 0;
    for(int i = 0; i < 5; i++){
        total += yearly_total[i];
        printf("the yearly total is %d\n", yearly_total[i]);
    }
    yearly_avg = total / 5;
    for(int i = 0; i < 12; i++){
        monthly_avg[i] = monthly_avg[i] / 5;
        printf("the monthly average is %d\n", monthly_avg[i]);
    }
    printf("the yearly average is %d\n", yearly_avg);



    return 0;
}
