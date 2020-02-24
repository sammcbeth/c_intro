#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10];
    int digits[500] = {[2]=1,[1]=2,[6]=3};
    int this[3][4]{
        {
            1,2,3,4
        },
        {
            1,2,3,4
        },
        {
            1,2,3,4
        }
    }
    for(int x = 0; x < 10; x++){
        numbers[x] = x;
    }
    for(int i = 0; i < 10; i++){
        printf("%d\n", numbers[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("%d\n", digits[i]);
    }
    return 0;
}
