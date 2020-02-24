#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primes[100];
    int index = 0;
    for(int i = 0; i <= 100; i++){
        if (i % 2 == 0){
            continue;
        }
        for (int j = i-1; j > 1; j--){
            if (i %j == 0){
                break;
            }
            else if (j == 2){
                primes[index] = i;
                index ++;
            }
        }

    }
    for (int x = index-1; x >= 0; x--){
        printf("%d\n", primes[x]);
    }
    return 0;
}
