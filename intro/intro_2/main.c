#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 33.152439;
    char charVar = 'A';

    _Bool boolVar = 0;
    printf("integer = %i\n", integerVar);
    printf("integer = %.2f\n", floatingVar);
    printf("char = %c\n", charVar);
    printf("this = %i\n", boolVar);
    return 0;
}
