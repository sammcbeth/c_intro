#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    /*
    if (number %2 == 1){
        printf("This is odd clause");
    }else{
        printf("This is even clause");
    }
    */
    number %2 == 1?  printf("This is odd clause"): printf("This is even clause");
    return 0;
}
