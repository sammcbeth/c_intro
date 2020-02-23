#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 614230;
    unsigned int b = 13;
    int result = 0;

    result = a << 4;

    printf("result is %ld", sizeof(result));

    return 0;

}
