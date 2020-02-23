#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    long l;
    char c;
    long long ll;
    long double ld;
    double d;

    printf("the int data type takes up bytes: %zd\n", sizeof(i));
    printf("the char data type takes up bytes: %zd\n", sizeof(c));
    printf("the double data type takes up bytes: %zd\n", sizeof(d));
    printf("the int long type takes up bytes: %zd\n", sizeof(l));
    printf("the int long long type takes up bytes: %zd\n", sizeof(ll));
    printf("the long double data type takes up bytes: %zd\n", sizeof(ld));
    return 0;
}
