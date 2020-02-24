#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    //generate random number
    time_t t;
    srand((unsigned) time(&t));
    int answer = rand() % 21;
    int guess;

    while (guess != answer){
        printf("Enter some number between 0 and 20: ");
        scanf("%d", &guess);
        if (guess < answer){
            printf("Sorry thats lower than the answer. \n");
        }
        else if (guess > answer){
            printf("Sorry thats higher than the answer. \n");
        }

    }
    printf("Thats Correct!");

    return 0;
}
